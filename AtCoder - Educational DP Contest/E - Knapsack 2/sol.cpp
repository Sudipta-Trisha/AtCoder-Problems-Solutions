/*

 ** Author : Sudipta Banik Trisha
 ** Problem: E - Knapsack 2

*/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
const ll INF = 1e10;

int main()
{
	ios_base::sync_with_stdio(false);

	ll n,w,sum=0;
	cin >> n >> w;

	vector<ll> weight(n), value(n);

	for(ll i=0; i<n; i++){
		cin >> weight[i] >> value[i];
		sum = sum + value[i];
	}
	
	vector<ll>dp(sum+10 , INF);
	dp[0] = 0;

	for(ll i=0; i<n; i++){
	//	cout << "i = " << i << " ";
		for(ll v = sum - value[i]; v >= 0; v--){
			dp[v + value[i]] = min(dp[v]+weight[i] , dp[v+value[i]]);
		//	cout << v+value[i] << " = "<< dp[v+value[i]] << " ";
		}	
		
	}

	for(ll i=sum ; i>=0; i--){
		if(dp[i] <= w){
			cout << i << endl;
			break;
		}
	}

	return 0;
}
