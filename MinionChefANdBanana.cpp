#include<iostream>
#include<algorithm>
using namespace std;
long ceiling(long a, long b)
{
    return a%b?(a/b+1):a/b;
}
long div(long a[],int n,int m)
{   long s=0;
    for(int i=0;i<n;i++)
        s+=ceiling(a[i],m);
    return s;
}
long check(long a[],int n,int h,long l,long u)
{      long m,k;
       while(l<u)
        {   if(l==u-1)
                l=u;
            m=(l+u)/2;
          //cout<<l<<" "<<m<<" "<<u<<endl;
            k=div(a,n,m);
          //cout<<k<<endl;
            if(k==h)
                {
                u=m;
                if(div(a,n,m-1)>h)
                    return m;
                }
            else if(k>h)
                l=m;
            else
                u=m;

            }
            return m;
}
int main()
{
    int t,i,n,h,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>h;
        long a[n],s=0;
        for(i=0;i<n;i++)
            {cin>>a[i];
            s+=a[i];}
        sort(a,a+n);
        if(s<=h)
            cout<<"1";
        else if(n==1)
        cout<<ceiling(a[0],h);
        else if(n==h)
        cout<<a[n-1];
        else
        cout<<check(a,n,h,1,a[n-1]);
        cout<<endl;
    }
    return 0;
}
