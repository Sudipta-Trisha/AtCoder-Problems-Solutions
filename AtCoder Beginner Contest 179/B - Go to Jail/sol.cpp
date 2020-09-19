
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 19, 2020 6:05 PM
 *    Problem Name  : B - Go to Jail
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc179/tasks/abc179_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n,cnt=0;
    cin >> n;

    while(n--){
        if(cnt >= 3) {
            break;
        }
        int u,v;
        cin >> u >> v;
        
        if(u == v) cnt++;
        else cnt=0;
    }

    //cout << cnt << endl;

    if(cnt >=3) cout << "Yes" << endl;
    else cout << "No" << endl;



    return 0 ;
}
