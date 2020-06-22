
/* Sudipta Banik Trisha */
/*Sylhet Engineering College */

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
 
int main()
 
{
	ll n,sum=0;
	cin >> n;
	int lim = 1e5 +90;
	ll  cnt[lim]= {};
	
	for(int i=0; i<n; i++){
        ll x;
		cin >> x;
		sum = sum + x;
        cnt[x]++;
	}
	
	ll m;
	cin>>m;
	
	for(int i=0; i<m; i++){
		ll b, c;
		cin >> b >> c;
 
        if (cnt[b]){
            sum += (c-b)*cnt[b];
            ll p = cnt[b] ;
            cnt[c] += p ;
            cnt[b] = 0;
        }
        cout << sum << endl ;
	}
		
	return 0;
}
