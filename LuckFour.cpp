#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,l,c;
    string s;
    cin>>t;
    while(t--)
    {   c=0;
        cin>>s;
        l=s.length();
        for(i=0;i<l;i++)
        {
            if(s[i]=='4')
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}

