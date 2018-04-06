#include<iostream>
using namespace std;
char c1='R',c2='G';
int comp1(char a[][100],int m,int n)
{   int i,j,p1=0,p2=0,q1=0,q2=0;
    for(i=0;i<m;i++)
    {
       if(i&1)
        {
            for(j=0;j<n;j+=2)
                if(a[i][j]!=c2)
                 {
                  //cout<<i<<" "<<j<<endl;
                  p2++;
                  }
            for(j=1;j<n;j+=2)
                if(a[i][j]!=c1)
                    {
                  //cout<<i<<" "<<j<<endl;
                  p1++;
                  }//p2++;
        }
        else
        {
            for(j=0;j<n;j+=2)
                if(a[i][j]!=c1)
                  {
                  //cout<<i<<" "<<j<<endl;
                  p1++;
                  }//p1++;
            for(j=1;j<n;j+=2)
                if(a[i][j]!=c2)
                  {
                  //cout<<i<<" "<<j<<endl;
                  p2++;
                  }//p2++;
        }

    }
    //cout<<endl;
     for(i=0;i<m;i++)
    {
       if(i&1)
        {
            for(j=0;j<n;j+=2)
                if(a[i][j]!=c1)
                 {
      //            cout<<i<<" "<<j<<endl;
                  q1++;
                  }
            for(j=1;j<n;j+=2)
                if(a[i][j]!=c2)
                    {
        //          cout<<i<<" "<<j<<endl;
                  q2++;
                  }//p2++;
        }
        else
        {
            for(j=0;j<n;j+=2)
                if(a[i][j]!=c2)
                  {
          //        cout<<i<<" "<<j<<endl;
                  q2++;
                  }//p1++;
            for(j=1;j<n;j+=2)
                if(a[i][j]!=c1)
                  {
            //      cout<<i<<" "<<j<<endl;
                  q1++;
                  }//p2++;
        }

    }

    return min((p1*3+p2*5),(q1*3+q2*5));
}
int main()
{
    int m,n,i,j,t;
    char a[100][100];
    cin>>t;
    while(t--)
    {
    cin>>m>>n;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
    cout<<comp1(a,m,n)<<endl;
    }
    return 0;
}
