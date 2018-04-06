#include<iostream>
using namespace std;
int main()
{
    int t,n,i;long u,d;
    cin>>t;
    while(t--)
    {

        cin>>n>>u>>d;
        int p=1;
        long a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]>a[i] && a[i+1]-a[i]>u)
                break;
            else if(a[i]>a[i+1] && a[i]-a[i+1]>d)
                {   if(p)
                    p--;
                    else
                    break;
                }

        }
        cout<<i+1<<endl;
    }
    return 0;
}
