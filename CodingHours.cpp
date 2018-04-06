#include<iostream>
using namespace std;
int main()
{
    long n,k,i,cnt=0,L,R,q,u,j;
    int choice;
    cin>>n>>k;
    long s[n],p[n];
    for(i=0;i<n;i++)
        p[i]=0;
    for(i=0;i<n;i++)
        {cin>>s[i];
        if(i==0)
        {
            if(s[0]>k)
                p[0]=1;
        }
        else
        {
            if(s[i]>k)
                p[i]=p[i-1]+1;
            else
                p[i]=p[i-1];
        }
        }
    cin>>q;
    while(q--)
    {
        cin>>choice>>L>>R;
        if(choice==1)
        {   u=s[L];
            s[L]=R;
            if(R>k&&u<k)
               {
                 for(i=L;i<n;i++)
                    p[i]++;
               }
            else if(R<k&&u>k)
                {
                    for(i=L;i<n;i++)
                        p[i]--;
                }
        }
        else
        {if(L!=R)
            cout<<p[R]-p[L]<<endl;
         else
            cout<<"1"<<endl;
        }
        /*for(j=0;j<n;j++)
            cout<<p[j]<<" ";
        cout<<endl;
        for(j=0;j<n;j++)
            cout<<s[j]<<" ";
        cout<<endl;*/
    }
    return 0;
}
