
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 08, 2020 2:24 PM
 *    Problem Name  : E - Crested Ibis vs Monster
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc153/tasks/abc153_e
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int
#define INF 1000000000
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll h,n;
    cin >> h >> n;

    ll a[n+1], b[n+1];

    for(ll i=0; i<n; i++) {
        cin >> a[i] >> b[i];
    }

    ll dp[n+1][h+1];
    dp[0][0] = 0;

    for(ll i=1; i<=h; i++) {
        dp[0][i] = INF;
    }

    for(ll i=1; i<=n; i++) {
        for(ll j=0; j<a[i-1]; j++) {
            if(dp[i-1][j] > b[i-1]) {
                dp[i][j] = b[i-1];
            }
            else dp[i][j] = dp[i-1][j];

            if(j == h){
                break;
            }
        }

        for(ll j=a[i-1]; j<=h; j++) {
            if(dp[i-1][j] > dp[i][j-a[i-1]]+b[i-1]){
                dp[i][j] = dp[i][j-a[i-1]]+b[i-1];
            }
            else dp[i][j] = dp[i-1][j];
        }
    }

    cout << dp[n][h] << endl;

    return 0 ;
}
