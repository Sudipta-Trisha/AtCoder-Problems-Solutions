
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 29, 2020 6:00 PM
 *    Problem Name  : C - Sum of product of pairs
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc177/tasks/abc177_c
 *    @genarated by : ai-virtual-assistant
 **/

#include<bits/stdc++.h>
#define ll long long int 
#define mod 1000000007
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll n;
    cin >> n;

    ll arr[n+1],sum=0,total=0;

    for(ll i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for(ll i=0; i<n; i++){
        sum = sum  - arr[i];
        total = ((total%mod) + ((sum % mod) * arr[i])%mod)%mod;
    }
    cout << total % mod << endl;
   
    return 0 ;
}
