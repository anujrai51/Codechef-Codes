#include<iostream>
using namespace std;
int main()
{
    int t,i,cnt;
    int a[]={1,2,5,10,50,100};
    long b;
    cin>>t;
    while(t--)
    {   cnt=0,i=5;
        cin>>b;
        while(b>0)
        {
            while(b>=a[i])
            {
                b-=a[i];
                cnt++;
            }
            i--;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
