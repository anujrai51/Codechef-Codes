#include<iostream>
using namespace std;
int main()
{
    int t,n,ck,hd;
    long a,k;
    cin>>t;
    while(t--)
    {   ck=hd=0;
        cin>>n>>k;
        while(n--)
        {
           cin>>a;
           if(a>=k/2)
                ck++;
           else if(a<=k/10)
                hd++;

        }
        if(ck==1&&hd==2)
           cout<<"yes";
        else
            cout<<"no";
        cout<<endl;
    }
    return 0;
}
