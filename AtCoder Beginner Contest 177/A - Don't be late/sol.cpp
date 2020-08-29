
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 29, 2020 6:00 PM
 *    Problem Name  : A - Don't be late
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc177/tasks/abc177_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    double d,t,s;
    cin >> d >> t >> s;

    double temp = (d/s);
    if(temp<=t) cout << "Yes" << endl;
    else cout << "No" << endl;




    return 0 ;
}
