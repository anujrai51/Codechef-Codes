#include<iostream>
using namespace std;
int main()
{
int t,cnt;
long a,b;
cin>>t;
while(t--)
{
cnt=0;
cin>>a;
while(a--)
{
cin>>b;
cnt^=b;
}
cout<<cnt<<endl;
}
return 0;
}
