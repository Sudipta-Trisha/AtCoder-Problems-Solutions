
// Problem: C - Doubled
// Contest: AtCoder - AtCoder Beginner Contest 196
// URL: https://atcoder.jp/contests/abc196/tasks/abc196_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll n;
	cin >> n;
	vector<string>v;
	
	for(ll i=1; i<=n; i++){
		string str = "";
		str += to_string(i);
		str += to_string(i);
		
		if(stoll(str) > n) break;
		
		v.push_back(str);
		
		if(stoll(str) > n) break;
	}
	cout << v.size() << endl;
}