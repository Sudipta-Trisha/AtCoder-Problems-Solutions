#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	sort(arr,arr+n);

	double sum = arr[0];
	for(int i=1; i<n; i++)
	{
		sum = (sum + arr[i])/2;
	}
	cout<<sum<<endl;
	return 0;
}
	
