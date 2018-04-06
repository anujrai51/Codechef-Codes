#include<iostream>
using namespace std;
int main()
{
int t,x,y,d,s,l,i;
string a,b;
cin>>t;
while(t--)
{
x=y=d=s=0;
cin>>a>>b;
l=a.length();
i=0;
while(i<l){
    if(a[i]=='?')
    {
        if(b[i]=='?')
            x++;
        else
            y++;
    }
    else
    {
        if(b[i]=='?')
            y++;
        else
        {
            if(a[i]==b[i])
                s++;
            else
                d++;
        }
    }
i++;
}
cout<<d<<" "<<d+x+y<<endl;
}
return 0;
}
