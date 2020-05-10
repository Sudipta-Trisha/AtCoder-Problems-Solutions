#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll a,b;
  cin>>a>>b;
 
  ll ans = __gcd(a,b);
  cout<<(a*b)/ans<<endl;
}
  
