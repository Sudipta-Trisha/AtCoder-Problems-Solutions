
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 04, 2020 4:21 PM
 *    Problem Name  : B - Magic 2
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int a,b,c;
    cin >> a >> b >> c;

    int k;
    cin >> k;

    if( a < b && b < c ){
        cout << "Yes" << endl;
        return 0;
    }

    while(k--){
        if( a >= b ){
            b = b*2;
        }

        else if( b >= c ){
            c = c*2;
        }

        if( a < b && b < c ){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0 ;
}
