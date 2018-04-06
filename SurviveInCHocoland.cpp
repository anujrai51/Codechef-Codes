#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n,k,s,p;
    cin>>t;
    while(t--)
    {
      cin>>n>>k>>s;
      if(s>6 && (n-k)*6<k)
        cout<<"-1";
      else
      {
          p=k*s;
          if(p%n)
            cout<<p/n+1;
          else
            cout<<p/n;
      }
      cout<<endl;
    }
    return 0;

}

