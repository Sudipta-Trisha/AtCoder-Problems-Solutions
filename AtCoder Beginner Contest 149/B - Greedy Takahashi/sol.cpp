
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 30, 2020 12:02 PM
 *    Problem Name  : B - Greedy Takahashi
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc149/tasks/abc149_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll a,b,k;
    cin >> a >> b >> k;

    ll mini = min(a,k);

    a = a - mini;
    k = k - mini;
    
    b = b - min(b,k);

    cout << a << " " << b << endl;
    return 0 ;
}
