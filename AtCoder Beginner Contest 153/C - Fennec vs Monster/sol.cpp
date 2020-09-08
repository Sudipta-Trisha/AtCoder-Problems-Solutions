
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 08, 2020 2:24 PM
 *    Problem Name  : C - Fennec vs Monster
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc153/tasks/abc153_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll n,k;
    cin >> n >> k;

    ll arr[n+1];
    for(ll i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);

    n = n-k;
    if(n <= 0) cout << "0" << endl;
    else {
        ll sum =0;
        for(ll i=0; i<n; i++) {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    return 0 ;
}
