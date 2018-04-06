#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    long m,x,y;
    cin>>t;
    while(t--)
    {
    cin>>m>>x>>y;
    if(!x)
        cout<<(m^(m-2));
    else
    {
        if(m==2)
            cout<<(1^(m*x/y));
        else
            cout<<(m^(m*x/y));
    }
    cout<<endl;
    }
    return 0;
}
