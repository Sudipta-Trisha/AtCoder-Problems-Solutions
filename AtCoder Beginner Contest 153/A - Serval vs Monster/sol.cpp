
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 08, 2020 2:24 PM
 *    Problem Name  : A - Serval vs Monster
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc153/tasks/abc153_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int a,b;
    cin >> a >> b;

    if(a%b == 0) cout << a/b << endl;
    else cout << (a/b)+1 << endl;


    return 0 ;
}
