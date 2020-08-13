
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 07, 2020 1:01 PM
 *    Problem Name  : A - Frog 1
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/dp/tasks/dp_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int>v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int dp[n+1] = {0};

    dp[1] = abs( v[1] - v[0]);

    for(int i=2; i<n; i++){
        dp[i] = min((abs(v[i]-v[i-1])+ dp[i-1]) , (abs(v[i]-v[i-2])+ dp[i-2]));
    }
    
    cout << dp[n-1] << endl;
    return 0 ;
}
