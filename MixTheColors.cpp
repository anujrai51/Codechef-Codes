#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    unsigned int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long int a[n];
        long s=0,c;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {   c=0;
            while(a[i]==a[i+1])
            {
                i++;
                c++;
            }
            s+=c;

        }
        cout<<s<<endl;
    }
    return 0;
}
