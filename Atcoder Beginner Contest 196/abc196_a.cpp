
// Problem: A - Difference Max
// Contest: AtCoder - AtCoder Beginner Contest 196
// URL: https://atcoder.jp/contests/abc196/tasks/abc196_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	
	int maxx = max(a,b);
	int mini = min(c,d);
	cout <<maxx - mini << endl;
}