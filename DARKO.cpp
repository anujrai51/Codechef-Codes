#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long t,i,n,no,temp,maxcnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        maxcnt=0;
        no=a[0];
      for(i=n-1;i>-1;i--)
      {
          temp=0;
          while(a[i]==a[i-1])
          {i--;
            temp++;
          }
          if(temp>maxcnt)
            {maxcnt=temp;
            no=a[i-1];
            }
      }
           cout<<no<<endl;

    }
    return 0;
}
