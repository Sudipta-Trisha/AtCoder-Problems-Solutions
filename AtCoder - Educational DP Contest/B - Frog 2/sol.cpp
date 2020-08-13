
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 07, 2020 1:51 PM
 *    Problem Name  : B - Frog 2
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/dp/tasks/dp_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n,k;
    cin >> n >> k;

    vector<int>v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int dp[n+1] = {0};

    for(int i=1; i<n; i++){
        dp[i] = dp[i-1] + abs(v[i] - v[i-1]);
        for(int j=i-1; j>= max(0,i-k); j--){
            dp[i] = min(dp[i], abs(v[i]-v[j])+dp[j]);
        }
    }

    cout << dp[n-1] << endl;

    return 0 ;


}
