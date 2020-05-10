#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,c,k;
    cin>>a>>b>>c>>k;
    
    ll temp = k;

    k = k - min(a,k);
    if(k==0) cout<<min(temp,a)<<endl;
    else{
        temp = k;
        k = k - min(k,b);
        if(k==0) cout<<(a+min(temp,b)*0)<<endl;
        else{
            temp = k;
            k = k - min(k,c);
            if(k==0) cout<<(a + min(temp,b)*0 + min(temp,c)*(-1))<<endl;
        }
    }
    
    return 0;
    
}

