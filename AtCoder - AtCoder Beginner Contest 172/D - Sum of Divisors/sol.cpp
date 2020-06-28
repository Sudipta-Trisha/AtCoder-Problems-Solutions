
/**
 *    author        : Trisha 
 *    created       : June 27, 2020 9:28 PM
 *    Problem Name  : D - Sum of Divisors
 *    Problem Limit : 3000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc172/tasks/abc172_d
**/

#include<bits/stdc++.h>
#define ll long long int
using  namespace std;
 
int main()
{
    ll a,sum=0;
    cin >> a;
    
    for(ll i=1; i<=a; i++){
        for(ll j=i; j<=a; j=j+i){
            sum = sum + j;
        }
    }
    cout<< sum <<endl;
    return 0;
}
