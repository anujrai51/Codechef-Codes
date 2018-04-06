#include<iostream>
using namespace std;
long sum(long n)
{
return (n*(n+1))/2;
}
int main()
{
int t,i;
long a,b,p;
cin>>t;
while(t--)
{
cin>>a>>b;
for(i=0;i<a;i++)
b=sum(b);
cout<<b<<endl;
}
return 0;
}
