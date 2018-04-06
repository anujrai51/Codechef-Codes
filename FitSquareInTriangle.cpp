#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n&1)
            n--;
        n=(n>2?(n*(n-2))/8:0);
        cout<<n<<endl;
    }
    return 0;
}
