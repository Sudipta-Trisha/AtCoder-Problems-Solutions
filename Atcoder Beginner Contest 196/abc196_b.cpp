
// Problem: B - Round Down
// Contest: AtCoder - AtCoder Beginner Contest 196
// URL: https://atcoder.jp/contests/abc196/tasks/abc196_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	string x;
	cin >> x;
	
	string str="";
	for(ll i=0; i<x.length(); i++){
		if(x[i] == '.'){
			break;
		}
		str += x[i];
	}
	
	cout << str << endl;
}