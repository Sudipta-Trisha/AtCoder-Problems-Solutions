
// Problem: B - Plus Matrix
// Contest: AtCoder - AtCoder Regular Contest 115
// URL: https://atcoder.jp/contests/arc115/tasks/arc115_b
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
	
	vector <vector <ll> > c(n,vector<ll>(n));
	
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			cin >> c[i][j];
		}
	}
	
	vector<ll>a(n), b(n);
	b = c[0];
	
	for(ll i=0; i<n; i++){
		a[i] = c[i][0] - b[0];
	}
	
	ll mini = *min_element(a.begin(),a.end());
	
	for(ll i=0; i<n; i++){
		a[i] = a[i] - mini;
		b[i] = b[i] + mini;
	}
	
	for(ll i=0; i<n; i++){
		if(a[i] < 0 || b[i] < 0){
			cout << "No" << endl;
			return 0;
		}
	}
	
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			if(a[i]+b[j] != c[i][j]){
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	
	for(auto x: a) cout << x << " ";
	cout << endl;
	
	for(auto x: b) cout << x << " ";
	cout << endl;
}