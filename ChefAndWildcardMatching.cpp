#include<iostream>
using namespace std;
int main()
{
int t,i,l,p;
string a,b;
cin>>t;
while(t--)
{
cin>>a>>b;
p=1,i=0;
l=a.length();
while(i<l)
{
    if(a[i]!=b[i])
        if(a[i]!='?'&&b[i]!='?')
        {
            p=0;
            break;
        }
    i++;
}
cout<<(p?"Yes":"No")<<endl;
}
return 0;
}
