#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,l,sum,t;
    cin>>t;
    while(t--)
    {
    cin>>s;
    l=s.length(),sum=0;
    for(i=0;i<l;i++)
        sum+=(s[i]-'0');
    cout<<sum<<endl;
    }
    return 0;
}
