/* Sudipta Banik Trisha */
/* Sylhet Engineering College */

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,n,temp;
	cin >> x >> n;
	
	set<int>s;
	
	
	for(int i=0; i<n; i++){
		cin >> temp;
		s.insert(temp);
	}
	
	for(int i=0; i<=100; i++){
		if(!s.count(x-i)){
			cout<< x-i <<endl;
			return 0;
		}
		else if(!s.count(x+i)){
			cout<< x+i <<endl;
			return 0;
		}
		
	}
	
	return 0;
}

	
	
