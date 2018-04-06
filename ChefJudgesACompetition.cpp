#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,s1,s2,maxa,maxb;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        s1=s2=maxa=maxb=0;
        for(i=0;i<n;i++)
            {cin>>a[i];
            s1+=a[i];
            if(a[i]>maxa)
                maxa=a[i];
            }
        for(i=0;i<n;i++)
            {cin>>b[i];
            s2+=b[i];
            if(b[i]>maxb)
                maxb=b[i];
            }
        cout<<((s1-maxa>s2-maxb)?"Bob":((s1-maxa==s2-maxb)?"Draw":"Alice"))<<endl;
    }
    return 0;
}
