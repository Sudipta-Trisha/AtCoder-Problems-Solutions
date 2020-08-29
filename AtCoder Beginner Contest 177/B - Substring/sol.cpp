
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 29, 2020 6:00 PM
 *    Problem Name  : B - Substring
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc177/tasks/abc177_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    string s,t;
    cin >> s >> t;

    int cnt=t.length();

    for(int i=0; i<=s.length()-t.length(); i++){
        int temp = t.length();
        for(int j=0; j<t.length(); j++){
            if(s[i+j] == t[j]) temp--; 
        }
        cnt = min(cnt,temp);
    }

    cout << cnt << endl;
    return 0 ;
}
