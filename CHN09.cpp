#include<iostream>
using namespace std;
int main()
{
    int t,a,b,i,l;
    string s;
    cin>>t;
    while(t--)
    {   a=b=0;
        cin>>s;
        l=s.length();
        for(i=0;i<l;i++)
        {
            if(s[i]=='a')
                a++;
            else
                b++;
        }
        cout<<min(a,b)<<endl;
    }
    return 0;
}
