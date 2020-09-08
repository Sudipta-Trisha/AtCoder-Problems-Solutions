
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 08, 2020 2:24 PM
 *    Problem Name  : D - Caracal vs Monster
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc153/tasks/abc153_d
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll h;
    cin >> h;

    ll ans = 0, cnt=1;

    while(h>0){
        h/=2;
        ans += cnt;
        cnt *= 2;
    }

    cout << ans << endl;

    return 0 ;
}
