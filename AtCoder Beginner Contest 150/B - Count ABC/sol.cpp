
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : September 01, 2020 9:17 PM
 *    Problem Name  : B - Count ABC
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc150/tasks/abc150_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int cnt=0;
 
    for(int i=0; i<s.length()-2; i++) {
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C')
            cnt++;
    }
 
    cout << cnt << endl;

    return 0 ;
}
