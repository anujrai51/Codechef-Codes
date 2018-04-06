#include<iostream>
using namespace std;
int main()
{
    int n,q;
    long mx=0,mn=1000000000,t,p;
    cin>>n>>q;
    while(n--)
    {
        cin>>p;
        if(p>mx)
            mx=p;
        else if(p<mn)
            mn=p;
    }
    while(q--)
    {
        cin>>t;
        if(t>=mn&&t<=mx)
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;
    }
    return 0;
}
