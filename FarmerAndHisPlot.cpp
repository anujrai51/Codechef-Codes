#include<iostream>
using namespace std;
long gcd(long a,long b)
{
    if(!a) return b;
    else if(!b) return a;
    else return gcd(b,a%b);
}
int main()
{
int t;
long a,b,p;
cin>>t;
while(t--)
{
cin>>a>>b;
p=gcd(a,b);
cout<<(a*b)/(p*p)<<endl;
}
return 0;
}
