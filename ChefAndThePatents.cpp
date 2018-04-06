#include<iostream>
using namespace std;
int main()
{
    int t,p;
    long n,m,k,x,i,even,odd;
    cin>>t;
    while(t--)
    {   even=odd=0;p=1;
        cin>>n>>m>>x>>k;
        string wrk;
        cin>>wrk;
    if(n>k)
        p=0;
    else
    {
    for(i=0;i<k;i++)
     {      if(wrk[i]=='E')
                even++;
            else
                odd++;
     }
     if(min(m/2*x,even)+min((m+1)/2*x,odd)<n)
        p=0;
    }
    cout<<(p?"yes":"no")<<endl;
    }
    return 0;
}
