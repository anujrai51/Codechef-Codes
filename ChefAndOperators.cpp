#include<iostream>
using namespace std;
int main()
{
    int t;
    long a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<(a<b?"<":(a>b?">":"="))<<endl;
    }
    return 0;
}
