
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 13, 2020 6:03 PM
 *    Problem Name  : -X-
 *    Problem Limit : NULL , NULL
 *    Problem Url   : -X-
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll nax = 100005;

vector<vector<ll> >graph(nax ,vector<ll>());
vector<ll>dp(nax,0);

void dfs(ll src, bool vis[])
{
    vis[src] = true;

    for(ll i=0; i<graph[src].size(); i++){
        ll x = graph[src][i];
        if(!vis[x]){
            dfs(x,vis);
        }

        dp[src] = max(dp[src], 1+dp[x]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    ll n,m;
    cin >> n >> m;

    for(ll i=0; i<m; i++){
        ll u,v;
        cin >> u >> v;

        graph[u].push_back(v);
    }
    
    //ll dp[n+2];
    //memset(dp, 0, sizeof(dp));

    bool vis[n+2];
    memset(vis, false, sizeof(vis));

    for(ll i=1; i<=n; i++){
        if(!vis[i]){
            dfs(i,vis);
        }
    }

    ll maxx = *max_element(dp.begin(), dp.end());
    cout << maxx << endl;

    return 0 ;
}
