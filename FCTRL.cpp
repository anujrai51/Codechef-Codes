#include<iostream>
using namespace std;
int main()
{
long n,p;
int s,t;
cin>>t;
while(t--)
{
s=0,p=5;
cin>>n;
while(p<=n)
{
    s+=(n/p);
    p*=5;
}
cout<<s<<endl;
}
return 0;
}
