
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 10, 2020 4:47 PM
 *    Problem Name  : A - Remaining Balls
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc154/tasks/abc154_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    string s,t,u;
    cin >> s >> t;

    int a,b;
    cin >> a >> b >> u;

    if(u == s){
        a--;
        cout << a << " " << b << endl;
    }

    else if(u == t) {
        b--;
        cout << a << " " << b << endl;
    }

    else{
        cout << a << " " << b << endl;
    }
    return 0 ;
}
