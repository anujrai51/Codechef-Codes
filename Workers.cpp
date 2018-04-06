#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],b[n],min1=10000,min2=10000,min3=10000;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        switch(b[i])
        {
        case 1: if(a[i]<min1)
                    min1=a[i];
                    break;
        case 2: if(a[i]<min2)
                    min2=a[i];
                    break;
        default: if(a[i]<min3)
                    min3=a[i];

        }
    }
    cout<<min(min1+min2,min3);
    return 0;
}
