#include<bits/stdc++.h>
using namespace std;

int main()

{
    int a,b,c;
    cin >> a >> b >> c;

    if(c == 0){
        if(a - b > 0) cout << "Takahashi" << endl;
        else cout << "Aoki" << endl;
    }

    else{
        if(b - a <=0 ) cout << "Takahashi" << endl;
        else cout << "Aoki" << endl;
    }
}
