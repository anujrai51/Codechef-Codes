#include<iostream>
using namespace std;
int main()
{
    int t,*a,m,n,*b,hd,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=n/2;hd=0;
        a=new int[n];
        b=new int[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
           if(i+m<n)
            b[m+i]=a[i];
           else
            b[i+m-n]=a[i];
        }
        for(i=0;i<n;i++)
            if(a[i]!=b[i])
            hd++;
        if(hd==0)
        {
            for(i=0;i<n;i++)
            {
                if(i+1<n)
                    b[i+1]=a[i];
                else
                    b[i+1-n]=a[i];
            }
            for(i=0;i<n;i++)
            if(a[i]!=b[i])
            hd++;
        }

        cout<<hd<<endl;
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    //    delete a,b;
    }
    return 0;
}
