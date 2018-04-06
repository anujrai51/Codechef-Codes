#include<iostream>
using namespace std;
int main()
{
    long n,q;
    cin>>n>>q;
    long a[n],i,b[n],x,y,z,p,cnt;
    for(i=0;i<n;i++)
            cin>>a[i];
    b[0]=a[0];
    for(i=1;i<n;i++)
        b[i]=a[i]^b[i-1];
    while(q--)
    {
        cin>>x>>y>>z;
        y--;
        if(x==1)
        {
            p=a[y]^z;
            for(i=y;i<n;i++)
                b[i]^=p;
            a[y]=z;
       /*     for(i=0;i<n;i++)
                cout<<b[i]<<" ";
            cout<<endl;*/
        }
        else
        {
            cnt=0;
            for(i=0;i<=y;i++)
                if(b[i]==z)
                cnt++;
            cout<<cnt<<endl;

        }
    }
    return 0;
}
