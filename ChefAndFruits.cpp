#include<iostream>
using namespace std;
int main()
{
int t,a,d,b,c;
cin>>t;
while(t--)
{
cin>>a>>b>>c;
d=a>b?(a-b):(b-a);
cout<<(d<=c?0:d-c)<<endl;
}
return 0;
}
