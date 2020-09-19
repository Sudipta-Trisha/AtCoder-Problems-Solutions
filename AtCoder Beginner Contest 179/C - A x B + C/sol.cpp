
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 19, 2020 6:12 PM
 *    Problem Name  : C - A x B + C
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc179/tasks/abc179_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll n,cnt=0;
    cin >> n;

    n = n - 1;

    for(ll i=1; i<=n; i++) {
        for(ll j=1; j<=n; j++) {
            if(i*j <= n) cnt++;
            else if(i*j > n) {
                break;
            }
        }
    }

    cout << cnt << endl;

    return 0 ;
}
