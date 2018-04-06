#include<iostream>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {

    int n,i,a,ev=0,od=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a&1)
            od++;
        else
            ev++;
    }
    cout<<(od&1?"2":"1")<<endl;
    }
    return 0;
}
