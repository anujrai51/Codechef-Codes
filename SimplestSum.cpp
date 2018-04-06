#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,l,i,j;string s;
    cin>>n;
    int p[n][10];
//    vector<int []> v;
    for(i=0;i<n;i++)
    {
        cin>>s;
        l=s.length();
        for(j=0;j<l;j++)
        {
            p[i][s[j]-'0']=1;
        }

    }
    for(i=0;i<n;i++)
        for(j=0;j<10;j++)
         cout<<p[i][j]<<" ";
    return 0;
}
