/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 01, 2020 9:17 PM
 *    Problem Name  : A - 500 Yen Coins
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc150/tasks/abc150_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int k,x;
    cin >> k >> x;
 
    if(k*500 < x) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0 ;
}

