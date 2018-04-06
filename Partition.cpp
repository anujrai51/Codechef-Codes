#include<iostream>
using namespace std;
int main()
{
    int t;
    long p,y,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>x>>n;
        long *a,*b;
        a=new long[n];
        b=new long[n];
        p=(n*(n+1))/2-x;
        if(n<4||p&1)
        {
            cout<<"impossible\n";
            continue;
        }
       else
       {   for(i=0;i<n;i++)
            b[i]=-1;
           for(i=0;i<n;i++)
            a[i]=i+1;
           i=n-1;
           y=p/2;
           //cout<<y<<endl;
           while(i>-1)
           {   if(y>0)
               {
               if(y>=a[i])
               {  if(a[i]==x)
                    i--;
                  y-=a[i];
                  b[i]=1;
                  //i--;
               }

               }
               else
                break;
            i--;

           }
           /*while(y>=a[i])
            {       if(a[i]==x)
                        {i--;
                        }
                        y-=a[i];
                        b[i]=1;
                        i--;


            }
                if(y!=x)
                    b[y-1]=1;
                else
                {   i=y-2;
                    while(y>0&&i>-1)
                    {
                        y-=a[i];
                        b[i]=1;
                        i--;
                    }
                }
*/
           for(i=0;i<n;i++)
           {
            if(b[i]==-1)
                b[i]=0;
            }
            b[x-1]=2;
            for(i=0;i<n;i++)
                cout<<b[i];
            cout<<endl;

       }
       delete a,b;

    }
    return 0;
}
