#include<iostream>
using namespace std;
int main()
{
int t;
float a,b,c;
int x,y,z;
cin>>t;
while(t--)
{
cin>>a>>b>>c;
x=a>50?1:0;
y=b<0.7?1:0;
z=c>5600?1:0;
cout<<(x?(y?(z?10:9):(z?7:6)):(y?(z?8:6):(z?6:5)))<<endl;
}
return 0;
}
