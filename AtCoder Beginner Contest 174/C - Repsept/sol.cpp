
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 02, 2020 6:00 PM
 *    Problem Name  : C - Repsept
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc174/tasks/abc174_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    
    ll k,temp=0;
    cin >> k;

    for(int i=1; i<=k; i++){
        temp = temp * 10 + 7;
        temp = temp % k;
        if(temp == 0){
            cout << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl;

    return 0 ;
}
