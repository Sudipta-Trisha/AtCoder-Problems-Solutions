
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 13, 2020 11:37 PM
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define mod 1000000007
#define sz 1000+10
using namespace std;

int dp[sz][sz];

int main(){
    ios_base::sync_with_stdio(false);

    int row, col;
    cin >> row >> col;

    for(int i=0; i<row; i++) dp[i][0] = 0;
    for(int j=0; j<col; j++) dp[0][j] = 0;

    dp[1][1] = 1;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            char ch;
            cin >> ch;
            
            if(i == 1 && j == 1) continue;
            if(ch == '#' ) continue;

            dp[i][j] = (dp[i-1][j]%mod + dp[i][j-1]%mod) % mod;
        }
    }

    cout << dp[row][col] << endl;

    return 0 ;
}
