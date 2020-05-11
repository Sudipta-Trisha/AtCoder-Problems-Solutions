#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[300] = {};
    int cnt=0;
    for(int i=1; i<=k; i++){
        int d;
        cin>>d;
        for(int j=1; j<=d; j++){
            int m;
            cin>>m;
            arr[m] = 1;
        }
    }
    for(int i=1; i<=n; i++){
        if(arr[i]==0)
            cnt++;
    }
    cout<<cnt<<endl;
}
