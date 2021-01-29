#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;

    int v[n+1], p[n+1], sum=0;
    for(int i=0; i<n; i++){
        cin >> v[i] >> p[i];
    }
    for(int i=0; i<n; i++){
        sum += v[i]*p[i];
        if(sum>100*x){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout <<"-1"<< endl;
}
