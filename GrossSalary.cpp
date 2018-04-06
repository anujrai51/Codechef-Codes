#include<iostream>
using namespace std;
int main()
{
int t;
long a;
float hr,da;
cin>>t;
while(t--)
{
cin>>a;
if(a<1500)
{
    hr=0.1*a;
    da=0.9*a;
}
else
{
    hr=500;
    da=0.98*a;
}
cout<<hr+da+a<<endl;
}
return 0;
}
