
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 04, 2020 4:12 PM
 *    Problem Name  : A - Kyu in AtCoder
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    if( n >= 400 && n <= 599) cout << "8" << endl;
    else if( n >= 600 && n <= 799) cout << "7" << endl;
    else if( n >= 800 && n <= 999) cout << "6" << endl;
    else if( n >= 1000 && n <= 1199) cout << "5" << endl;
    else if( n >= 1200 && n <= 1399) cout << "4" << endl;
    else if( n >= 1400 && n <= 1599) cout << "3" << endl;
    else if( n >= 1600 && n <= 1799) cout << "2" << endl;
    else cout << "1" << endl;

    return 0 ;
}
