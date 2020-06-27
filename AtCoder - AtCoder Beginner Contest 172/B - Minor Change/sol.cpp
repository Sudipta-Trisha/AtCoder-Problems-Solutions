
/**
 *    author        : Trisha 
 *    created       : June 27, 2020 9:28 PM
 *    Problem Name  : B - Minor Change
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc172/tasks/abc172_b
**/

#include<bits/stdc++.h>
using namespace std;

int main(){

	string s,t;
	cin >> s >> t;
	
	int cnt=0;
	
	for(int i=0; i<s.length(); i++){
		if(s[i] != t[i]) 
			cnt++;
	}
	cout << cnt <<endl;

    return 0;
}
