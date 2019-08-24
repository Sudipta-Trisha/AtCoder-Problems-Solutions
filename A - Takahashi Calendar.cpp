#include<bits/stdc++.h>
using namespace std;

void p_day()
{
    int M,D;
    cin>>M>>D;
    
    int day = 0;
    
    for(int i=1; i<=M; i++)
    {
        for(int j=10; j<=D; j++)
        {
            int d1 = j%10, d10 = j/10;
            if(d1>=2 && d10>=2 && d1*d10==i)
            {
                day++;
            }
        }
    }
    
    cout<<day<<endl;
}
int main()
{
    p_day();
    return 0;
}
