#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,ms,md;
    cin >> n >> ms >> md;

    ll x, y;
    bool flag = false;

    for(int i=0; i<n; i++){
        cin >> x >> y;

        if( x < ms && y > md){
           flag = true;
        }
    }

    if( flag == true) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
