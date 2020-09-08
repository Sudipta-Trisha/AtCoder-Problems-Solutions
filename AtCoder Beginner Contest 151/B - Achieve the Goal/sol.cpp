
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 07, 2020 9:19 PM
 *    Problem Name  : B - Achieve the Goal
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc151/tasks/abc151_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n,k,m;
    cin >> n >> k >> m;
    int sum = n*m;

    int arr[n+1];
    for(int i=0; i<n-1; i++) {
        cin >> arr[i];
        sum = sum - arr[i];
    }

    if( sum > k ) cout << "-1" << endl;
    else if( sum < 0 ) cout << "0" << endl;
    else cout << sum << endl;
 
    return 0 ;
}
