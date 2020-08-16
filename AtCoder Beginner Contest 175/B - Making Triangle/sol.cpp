
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 15, 2020 6:00 PM
 *    Problem Name  : B - Making Triangle
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc175/tasks/abc175_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll n;
    cin >> n;

    ll arr[n+1];
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    ll cnt=0;

    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){
            for(ll k=j+1; k<n; k++){
                if(((arr[i]+arr[j]) > arr[k]) && (arr[i]!=arr[j] && arr[j]!=arr[k]))
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    
    return 0 ;
}
