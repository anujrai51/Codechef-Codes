#include<iostream>
using namespace std;
int main()
{
    int t,i,j,p;
    string s;
    cin>>t;
    while(t--)
    {   p=1;
        cin>>s;
        j=s.length()-1,i=0;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                p=0;
                break;
            }
            i++;
            j--;
        }
        cout<<(p?"wins":"losses")<<endl;
    }
    return 0;
}
