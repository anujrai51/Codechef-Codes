#include<iostream>
using namespace std;
int main()
{
int t,i,l,f;
long *p,mx;
string a,b;
cin>>t;
while(t--)
{
cin>>l>>a>>b;
i=f=0;
p=new long[l+1];
while(i<l)
{
if(a[i]==b[i])
    f++;
i++;
}
for(i=0;i<=l;i++)
    cin>>p[i];
mx=p[0];
if(f==l)
mx=p[l];
else{
    for(i=1;i<=f;i++)
       mx=max(mx,p[i]);
}
cout<<mx<<endl;
}
return 0;
}
