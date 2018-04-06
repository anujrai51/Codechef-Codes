#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i;
    long *a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=new long[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<a[0]+a[1]<<endl;
        delete a;
    }
    return 0;
}
