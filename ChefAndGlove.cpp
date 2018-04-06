#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,i,p,q;
    cin>>t;
    while(t--)
    {
        cin>>n;p=q=0;
        long a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
        {
            if(a[i]>b[i])
                {   p=0;
                    break;
                }
            else
                p=1;

        }
        for(i=n-1;i>-1;i--)
        {
            if(a[i]>b[n-i-1])
            {
                q=0;
                break;
            }
            else
                q=1;
        }
        cout<<(p?(q?"both":"front"):(q?"back":"none"))<<endl;

    }
    return 0;
}

