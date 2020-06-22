/* Sudipta Banik Trisha */
/*Sylhet Engineering College */

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
	ll n;
	cin >> n;
	
	string res;
	
	while(n>0){
		n = n - 1;
		res += 97 + (n%26);
		n = n / 26;
		
	}
	
	reverse(res.begin(), res.end());
	cout << res << endl;
	return 0;
}
