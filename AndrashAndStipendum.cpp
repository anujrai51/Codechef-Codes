#include<iostream>
using namespace std;
int main()
{
    int t,i,n,p,a,r;
    long s;
    cin>>t;
    while(t--)
    {   p=1;
        r=s=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            s+=a;
            if(a==2)
                p=0;
            if(a==5)
                r++;

        }
        if(p)
        {
            if(!r)
                p=0;
            else if((float)(s/n)<4.00)
                p=0;

        }
        cout<<(p?"Yes":"No")<<endl;

    }
    return 0;
}
