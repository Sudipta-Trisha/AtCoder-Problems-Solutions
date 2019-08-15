#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,x;
	cin>>k>>x;

	int mini = max(-1000000,(x-k+1));
	int maxi = min(1000000,(x+k-1));

	for(int i=mini; i<=maxi; i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	return 0;
}
