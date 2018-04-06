#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long n,i,j,maxn,s;
    int p,t;
    cin>>t;
    while(t--)
    {   p=s=0;
        cin>>n;
        long a[n][n];
        for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
           cin>>a[i][j];
        sort(a[i],a[i]+n);
        }
        s=maxn=a[n-1][n-1];
        for(i=n-2;i>-1;i--)
        {
            j=n-1;
            while(maxn<=a[i][j]&&j>-1)
                j--;
            if(a[i][j]<maxn&&j>-1)
                maxn=a[i][j];
           // cout<<maxn<<endl;
            s+=maxn;
            if(j==-1)
                {
                p=1;
                break;
                }

        }
        if(p)
            cout<<"-1";
        else
            cout<<s;
        cout<<endl;
    }
    return 0;
}
