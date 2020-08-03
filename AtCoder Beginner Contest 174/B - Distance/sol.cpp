
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 02, 2020 6:00 PM
 *    Problem Name  : B - Distance 
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc174/tasks/abc174_b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

double solve(ll x, ll y)
{
    double x1 = x*x;
    double y1 = y*y;

     double s = x1 + y1;
     double sum = sqrt(s);

     return sum;
}


int main(){
    ios_base::sync_with_stdio(false);

    ll n,d,cnt=0;
    cin >> n >> d;

   // vector<ll>v;

    for(ll i=0; i<n; i++){
        double x,y;
        cin >> x >> y;

        double temp = solve(x,y);

        if(temp <= d) cnt++;
    }

    cout << cnt << endl;
    return 0 ;
}
