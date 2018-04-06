#include<iostream>
using namespace std;
string prime(long n)
{   if(n<2)
        return "no";
    if(n<4)
        return "yes";
    if(n%2==0||n%3==0)
        return "no";
    if((n+1)%6!=0&&(n-1)%6!=0)
        return "no";
    for(int i=5;i*i<=n;i+=6)
        if(n%i==0||n%(i+2)==0)
            return "no";
    return "yes";
}
int main()
{
    int t;
    long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<prime(n)<<endl;
    }
    return 0;
}
