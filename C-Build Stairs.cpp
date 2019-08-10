#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int height[n];
	for(int i=0; i<n; i++)
	{
		cin>>height[i];
	}
	int flag  = 1;
	for(int i=1; i<n; i++)
	{
		 if(height[i-1]<height[i])
		 {
			height[i]-=1;
		 }
		 if(height[i-1]>height[i]){
				flag = 0;
				break;
		}
	}
	if(flag==1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
