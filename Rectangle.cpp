#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,a[4];
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        sort(a,a+4);
        if(a[0]==a[1]&&a[2]==a[3])
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
}
