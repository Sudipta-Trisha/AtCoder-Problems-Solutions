
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 15, 2020 6:00 PM
 *    Problem Name  : C - Walking Takahashi
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc175/tasks/abc175_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll x , k ,d;
    cin >> x >> k >> d;

    x = abs(x);
    ll temp = x/d;
    if(x>0 && temp >= k){
        cout << abs(x - k*d) <<endl;
        return 0;
    }

    x -= temp*d;
    k -= temp;

    if(k%2!=0){
        cout << min(abs(x+d) , abs(x-d)) << endl;
    }
    else cout << abs(x) << endl;

    return 0 ;
}
