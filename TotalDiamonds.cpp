#include<cmath>
#include<iostream>
using namespace std;
long diamond(long n)
{
   long i,j=2,s=0;
   while(j<=n+1)
   {
       s+=(j*(j-1));
       j++;
   }
   j=n+2,i=n-1;
   while(i>0)
   {
       s+=(j*i);
       j++;
       i--;
   }
   return s;
}
int main()
{
    int t;
    long n,i,j;
    cin>>t;
    while(t--)
    {   cin>>n;
        cout<<diamond(n)<<endl;
    }
    return 0;
}
