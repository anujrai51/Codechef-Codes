#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,i;
    double loss,a,b,c;
    cin>>t;
    while(t--)
    {   loss=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            loss+=(b*a*c*c)/10000;

        }
        printf("%.6f\n",loss);
        }
    return 0;
}
