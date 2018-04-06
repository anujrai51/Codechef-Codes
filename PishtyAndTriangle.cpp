#include<iostream>
#include<algorithm>
using namespace std;
long fun(long a[],int x,int y)
{   int n=y-x+1,i;
    long b[n];
    for(i=0;i<n;i++)
    {
        b[i]=a[x+i];
    }
    sort(b,b+n);
    for(i=n-3;i>-1;i--)
    {
        if(b[i]+b[i+1]>b[i+2])
              return (b[i]+b[i+1]+b[i+2]);
    }
    return 0;
}
int main()
{
    int n,q,v,l,i;
    cin>>n>>q;
    long a[n],r;
    for(i=0;i<n;i++)
        cin>>a[i];
    while(q--)
    {
        cin>>v>>l>>r;
        if(v==1)
            a[l-1]=r;
        else
            cout<<fun(a,l-1,r-1)<<endl;
    }
   return 0;
}

