#include<iostream>
using namespace std;
int main()
{
int t,i,a,b,p;
cin>>t;
while(t--)
{
cin>>a>>b;
p=0;
for(i=2;i<=b;i++)
    if((a%i )> p)
        p = a%i;
cout<<p<<endl;
}
return 0;
}
