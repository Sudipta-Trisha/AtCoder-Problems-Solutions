
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 07, 2020 5:41 PM
 *    Problem Name  : D - Knapsack 1
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/dp/tasks/dp_d
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll knapsack(ll n, ll capacity, ll profit[], ll weight[])
{
	ll mat[n+1][capacity+1];
	for(ll i=0; i<=n; i++){
		for(ll j=0; j<=capacity; j++){
			if(i==0 || j==0){
				mat[i][j] = 0;
			}
			else if(weight[i-1]<=j){
				mat[i][j] = max(profit[i-1] + mat[i-1][j-weight[i-1]], mat[i-1][j]);
			}
			else{
				mat[i][j] = mat[i-1][j];
			}
		}
	}
	return mat[n][capacity];

}

int main(){
    ios_base::sync_with_stdio(false);

    ll n, capacity;
    cin >> n >> capacity;

    ll weight[n] , profit[n];

    for(ll i=0; i<n; i++){
        cin >> weight[i] >> profit[i];
    }
    
    cout << knapsack(n,capacity,profit,weight) << endl;

    return 0 ;
}
