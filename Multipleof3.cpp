#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c;
    unsigned long k,s;
    cin>>t;
    while(t--)
    {   c=1;i=2;
        cin>>k;
        cin>>a>>b;
        s=a+b;
      //  k-=2;
        while(c&1&&i<k)
        {
        i++;
        c=s%10;
        s+=c;
      //  cout<<s<<" ";
        a=b;
        b=c;
        }
        s%=3;
       // cout<<s;

        cout<<(s%3?"NO":"YES")<<endl;
    }
    return 0;

}
