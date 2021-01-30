#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];

    int total = 0;

    for(int i=0; i<n; i++){
        int temp = v[i];
        for(int j=i; j<n; j++){
            temp = min(temp,v[j]);
            total = max( total, temp * (j-i+1));
        }
    }

    cout << total << endl;
    return 0;
}
