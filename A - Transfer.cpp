#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;

	if(a>=(b+c))
	{
		  cout<<"0"<<endl;
	}
	else{

		 cout<<((b+c)-a)<<endl;
    }
    return 0;
   }
