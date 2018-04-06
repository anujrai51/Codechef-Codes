#include<iostream>
#include<string>
/*int check(string s,int l)
{   char p[4];
    int i,t=0;
        for(i=0;i<l-3;i++)
        {
            p[0]=s[i];
            p[1]=s[i+1];
            p[2]=s[i+2];
            p[3]=s[i+3];
            p[4]='\0';
            sort(p,p+4);
            if(string(p)=="cefh")
                t++;

        }
        return t;
}
int main()
{   string s;
    int t,p;
    cin>>t;
    while(t--)
    {
        cin>>s;
       p=check(s,s.length());
       if(p)
        cout<<"lovely "<<p;
        else
            cout<<"normal";
        cout<<endl;
    }
    return 0;
}
*/
#include<algorithm>
using namespace std;
int main()
{
    long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<(n%8?"NO":"YES")<<endl;
    }
    return 0;
}
