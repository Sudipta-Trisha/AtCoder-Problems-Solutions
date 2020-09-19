
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 19, 2020 6:01 PM
 *    Problem Name  : A - Plural Form
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc179/tasks/abc179_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;

    int len = s.length();
    if(s[len-1] == 's') cout << s << "es" << endl;
    else cout << s << "s" << endl;

    return 0 ;
}
