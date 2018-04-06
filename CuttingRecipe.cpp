#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if(a==0) return b;
    else if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    int t,n,*a,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=new int[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        p=a[0];
        for(i=1;i<n;i++)
        {if(a[i]==1||p==1)
               {    p=1;
                   break;
               }
          p=gcd(p,a[i]);
        }
        if(p!=1)
        {
            for(i=0;i<n;i++)
                a[i]/=p;
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        delete a;
    }
    return 0;
}
