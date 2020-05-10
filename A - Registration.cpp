#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int s_len = s.size();
    int t_len = t.size();
    bool flag = false;
    if(s_len<t_len){
        flag = false;
        for(int i=0; i<s.size(); i++){
            if(s[i]==t[i])
                flag = true;
            else{
                flag = false;
                break;
            }
        }
    }

    if(flag==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
