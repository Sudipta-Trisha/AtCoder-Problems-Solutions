
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 07, 2020 9:19 PM
 *    Problem Name  : C - Welcome to AtCoder
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc151/tasks/abc151_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    
    ll n,m;
    cin >> n >> m;

    bool vis[n+1] = {};
    ll ac=0, wa=0;
    vector<ll>w(n,0);
    for(ll i=0; i<m; i++) {
        ll x;
        string s;
        cin >> x >> s;

        if(s == "AC") {
            if(vis[x-1] == false){
                ac++;
                vis[x-1] = true;
                wa += w[x-1];

            }
        }
        else  w[x-1]++;
    
    }
    if(ac == 0) cout << "0" << " " << "0" << endl;
    else cout << ac << " " << wa << endl;

    return 0 ;
}
