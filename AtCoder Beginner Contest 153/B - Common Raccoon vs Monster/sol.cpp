
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 08, 2020 2:24 PM
 *    Problem Name  : B - Common Raccoon vs Monster
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc153/tasks/abc153_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    
    ll h,n,sum=0;
    cin >> h >> n;

    ll arr[n+1];
    for(ll i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    if(h <= sum) cout << "Yes" << endl;
    else cout << "No" << endl;
 
    return 0 ;
}
