#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,k,*a;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        a=new int[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<a[(n+k)/2]<<endl;
        delete a;
    }
    return 0;
}
