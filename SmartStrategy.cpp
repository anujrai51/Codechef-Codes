#include<iostream>
using namespace std;
void printer(long b, long k[],long n)
{
    for(long i=0;i<n;i++)
    {
        b=b/k[i];
    }
    cout<<b<<" ";
}
int main()
{
    int t;
    long a,b,n,q,i,*k;
    cin>>t;
    while(t--)
    {
    a=1;
    cin>>n>>q;
   /* while(n--)
    {   cin>>b;
        a*=b;
    }
    while(q--)
    {   cin>>b;
        cout<<floor(b/a)<<" ";
    }*/
    k=new long[n];
    for(i=0;i<n;i++)
        cin>>k[i];
    while(q--)
    {   cin>>b;
        printer(b,k,n);
    }
    delete k;
    cout<<endl;
    }
    return 0;
}
