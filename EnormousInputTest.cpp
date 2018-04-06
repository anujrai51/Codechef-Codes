#include<iostream>
using namespace std;
int main()
{
    int n,k,p=0;
    long r;
    cin>>n>>k;
    while(n--)
    {
        cin>>r;
        if(r%k==0)
            p++;
    }
    cout<<p;
    return 0;
}
