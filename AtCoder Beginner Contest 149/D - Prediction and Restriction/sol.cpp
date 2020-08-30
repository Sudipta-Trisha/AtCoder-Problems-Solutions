
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 30, 2020 1:48 AM
 *    Problem Name  : D - Prediction and Restriction
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc149/tasks/abc149_d
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    
    int n,k;
    cin >> n >> k;

    int R,S,P;
    cin >> R >> S >> P;

    string s;
    cin >> s;

    string t = "";
    int sum = 0;
    
    for(int i=0; i<k; i++){
       if(s[i] == 'r'){
          t+='p';
          sum += P;
       }
       else if(s[i] == 's'){
          t+='r';
          sum += R;
       }

       else if(s[i] == 'p'){
          t+='s';
          sum += S;
       }
    }

    for(int i=k; i<n; i++) {
       if(s[i] == 'r' && t[i-k] != 'p') {
          sum += P;
          t += 'p';
       }

       else if(s[i] == 's' && t[i-k] != 'r'){
          t+='r';
          sum += R;
       }

       else if(s[i] == 'p' && t[i-k] != 's'){
          t+='s';
          sum += S;
       }

       else {
          t += 'x';
          sum += 0;
       }
    }

    cout << sum << endl;
    return 0 ;
}
