
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 29, 2020 6:00 PM
 *    Problem Name  : D - Friends
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc177/tasks/abc177_d
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int parent[200005], sz[200005];

void makeset(int n)
{
    for(int i=0; i<n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

int find_par(int f)
{
    if( f == parent[f] )
        return f;
    return parent[f] = find_par(parent[f]);
}

void join(int a, int b)
{
    int x = find_par(a);
    int y = find_par(b);

    if(x != y){
        parent[y] = x;
        sz[x] += sz[y];
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    int n,m;
    cin >> n >> m;

    makeset(n);

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        join(u,v);
    }

    cout << *max_element(sz,sz+n) << endl;

    return 0 ;
}
