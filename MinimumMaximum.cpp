#include<iostream>
using namespace std;
int main()
{
int t,i;
long a,b,m;
cin>>t;
while(t--)
{
m=100000;
cin>>a;
for(i=0;i<a;i++)
{
cin>>b;
if(b<m)
    m=b;
}
cout<<m*(a-1)<<endl;
}
return 0;
}
