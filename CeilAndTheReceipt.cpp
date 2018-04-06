#include<iostream>
using namespace std;
int nob(int b)
{
    int p=2048,c=0;
    while(b>0)
    {
        while(b>=p)
        {
            b-=p;
            c++;
        }
        p/=2;

    }
    return c;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<nob(n)<<endl;
    }
    return 0;
}
