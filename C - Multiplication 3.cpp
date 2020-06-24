#include<bits/stdc++.h>
#define ll long long int
using  namespace std;
 
int main()
{
    ll a;
    double b;
    cin>>a>>b;
    ll ans = (b*100) + 0.5;
    ll result  = (a*ans) / 100;
    cout<<(result)<<endl;
 
    return 0;
}
