#include<iostream>
using namespace std;
int main()
{
int t;
long a,b,p;
cin>>t;
while(t--)
{
cin>>a>>b>>p;
if(p&1)
    a*=2;
cout<<max(a,b)/min(a,b)<<endl;
}
return 0;
}
