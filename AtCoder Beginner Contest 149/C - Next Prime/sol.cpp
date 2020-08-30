
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 30, 2020 12:34 PM
 *    Problem Name  : C - Next Prime
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/abc149/tasks/abc149_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;
#define sz 100005
#define ll long long int 

vector<ll>v;
bool arr[10000000+10];
void sieve()
{
  v.push_back(2);
  for(ll i=4; i<=sz; i+=2 )
    arr[i]=1;
  for(ll i=3; i<=sz; i+=2){
      if(!arr[i]){
        v.push_back(i);
        if(i*i<=sz){
          for(ll j=i*i; j<=sz; j+=i+i){
            arr[j]=1;
          }
        }
      }
      
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    sieve();
    ll x;
    cin >> x;

    for(ll i=0; i<v.size(); i++){
        if(v[i] >= x){
            cout << v[i] << endl;
            break;
        }
    }

    return 0 ;
}
