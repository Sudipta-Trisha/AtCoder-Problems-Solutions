
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 01, 2020 9:17 PM
 *    Problem Name  : C - Count Order
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc150/tasks/abc150_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
 
    vector<int>v(n);
    for(int i=0; i<n; i++) {
        v[i] = i+1;
    }
 
    vector<int>p(n),q(n);
    for(int i=0; i<n; i++) cin >> p[i];
    for(int i=0; i<n; i++) cin >> q[i];
 
    int cnt=0, a=0, b=0;
 
    do {
        cnt++;
 
        for(int i=0; i<n; i++) {
            if(a == 0 && v == p) a = cnt;
            if(b == 0 && v == q) b = cnt;
 
            if((a!=0 && b==0) || (a==0 && b!=0) ) break;
        }
 
    }while(next_permutation(v.begin(),v.end()));
    
    cout << abs(a-b) << endl;

    return 0 ;
}
