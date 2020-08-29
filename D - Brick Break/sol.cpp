
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 30, 2020 1:22 AM
 *    Problem Name  : D - Brick Break
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc148/tasks/abc148_d
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int>v(n+1),vec;

    for(int i=1; i<=n; i++){
        cin >> v[i];
    }

    int cnt=0, pos = 1;

    for(int i=1; i<=n; i++){
        if(v[i] == pos){
            pos++;
        }
        else cnt++;
    }

    if(cnt == n) cout << "-1" << endl;
    else cout << cnt << endl;

    return 0 ;
}
