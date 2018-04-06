#include<iostream>
using namespace std;
int main()
{
    int n,i,a,odd=0,even=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a&1)
            odd++;
        else
            even++;

    }
    cout<<(even>odd?"READY FOR BATTLE":"NOT READY")<<endl;
    return 0;
}
