
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 08, 2020 9:41 PM
 *    Problem Name  : -X-
 *    Problem Limit : NULL , NULL
 *    Problem Url   : -X-
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;
#define sz 3005
int dp[sz][sz];

int lcs(string s1, string s2,int m, int n)
{
    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else if(s1[i-1]==s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }
    return dp[m][n];
}

void print_lcs(string s1, string s2, int length,int m, int n)
{
    char ans[length+1];
    ans[length] = '\0';
    int i=m, j=n;
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            ans[length-1] = s1[i-1];
            i--;
            j--;
            length--;
        }
        else if (dp[i-1][j] > dp[i][j-1])
            i--;
        else
            j--;
    }
    cout << ans << endl;
}


int main(){
    ios_base::sync_with_stdio(false);

    string s1,s2;
    cin >> s1 >> s1;

    int m = s1.length();
    int n = s2.length();
    int len = lcs(s1,s2,m,n);
    print_lcs(s1,s2,len,m,n);

    return 0 ;
}
