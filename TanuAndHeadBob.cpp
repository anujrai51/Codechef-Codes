#include<iostream>
using namespace std;
int main()
{
    int t,n,i,y,no;
    char c;
    cin>>t;
    while(t--)
    {
        i=y=no=0;
        cin>>n;
        while(n--)
        {
            cin>>c;
            if(c=='Y')
                y++;
            else if(c=='N')
                no++;
            else
                i++;
        }
        cout<<(i?"INDIAN":(y?"NOT INDIAN":"NOT SURE"))<<endl;
    }
    return 0;
}
