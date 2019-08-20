#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;

	double arr[1000000];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	double sum = 0.0;

	for(int i=0; i<n; i++)
	{
		sum += 1/(arr[i]);
	}

	cout<< 1/(sum)<<endl;
	
	return 0;
}
	
