
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 15, 2020 6:00 PM
 *    Problem Name  : A - Rainy Season
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc175/tasks/abc175_a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;
    int cnt=0,maxx=0;
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'R'){
            cnt++;
            maxx = max(maxx,cnt);
        }
        else cnt=0;
    }
    cout << maxx << endl;
    return 0 ;
}
