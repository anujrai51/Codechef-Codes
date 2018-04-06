#include<iostream>
using namespace std;
int main()
{
int t,i,l,max,a[26];
string s;
cin>>t;
while(t--)
{
for(i=0;i<26;i++)
    a[i]=0;
cin>>s;
l=s.length();
i=max=0;
while(i<l)
{
    a[s[i++]-'a']++;
}
for(i=0;i<26;i++)
    if(max<a[i])
        max=a[i];
cout<<(max==(l-max)?"YES":"NO")<<endl;
}
return 0;
}
