
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 02, 2020 6:00 PM
 *    Problem Name  : D - Alter Altar
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc174/tasks/abc174_d
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

    string s1 = "";
    s1 = s;

    sort(s.begin(),s.end());

    int cnt=0;

    for(int i=0; i<n; i++){
        if(s[i] != s1[i]) cnt++;
    }

    cout << cnt/2 << endl;

    return 0 ;
}
