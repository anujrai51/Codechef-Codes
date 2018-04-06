#include<iostream>
using namespace std;
int gcd(long a,long b)
{
    if(!a) return b;
    else if(!b) return a;
    else
        return gcd(b,a%b);
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
cout<<p<<" "<<(a*b)/p<<endl;
}
return 0;
}
