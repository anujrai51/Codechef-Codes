#include<iostream>
using namespace std;
int main()
{
    int t,n,*a,i,s[1000],k,p;
    long tot;
    cin>>t;
    while(t--){
        cin>>n;
        a=new int[n];
        for(i=0;i<1000;i++)
            s[i]=0;
        tot=p=0;
        for(i=0;i<n;i++)
        {
            cin>>k;
            s[k-1]++;
        }
        for(i=0;i<1000;i++)
            if(s[i])
                {
                tot+=(n-p-s[i]);
                p+=s[i];
                }
        if(!tot)
            tot=n*(n-1);
        cout<<(float)tot/(n*(n-1))<<endl;
        delete a;
    }
    return 0;
}


