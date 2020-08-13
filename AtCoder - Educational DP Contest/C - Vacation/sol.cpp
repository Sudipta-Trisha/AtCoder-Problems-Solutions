
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 07, 2020 4:32 PM
 *    Problem Name  : C - Vacation
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/dp/tasks/dp_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int abc[n][3];

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> abc[i][j];
        }
    }

    int dp[n+1][3];

    for(int i=0; i<3; i++){
        dp[0][i] = abc[0][i];
    }

    for(int i=1; i<n; i++){
        dp[i][0] = max(dp[i-1][1],dp[i-1][2]) + abc[i][0];
        dp[i][1] = max(dp[i-1][0],dp[i-1][2]) + abc[i][1];
        dp[i][2] = max(dp[i-1][0],dp[i-1][1]) + abc[i][2];
    }

    cout << max(dp[n-1][2],max(dp[n-1][1], dp[n-1][0])) << endl;

    return 0 ;
}
