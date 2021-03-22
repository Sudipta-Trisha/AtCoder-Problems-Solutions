
// Problem: A - Two Choices
// Contest: AtCoder - AtCoder Regular Contest 115
// URL: https://atcoder.jp/contests/arc115/tasks/arc115_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll n,m;
	cin >> n >>m;
	
	ll x=0,y=0;
	while(n--){
		ll sum = 0;
		string a;
		cin >> a;
		for(ll i=0; i<m; i++){
			if(a[i] == '1') sum++;
		}
		if(sum%2==0) x++;
		else y++;
	}
	
	cout << x*y << endl;
}