#include<iostream>
using namespace std;
int main()
{
    int t,a,d,i;
    cin>>t;
    while(t--)
    {   d=0;
        for(i=0;i<5;i++)
            {cin>>a;
            if(a)
                d++;}
        switch(d)
        {
            case 0:cout<<"Beginner";break;
            case 1:cout<<"Junior Developer";break;
            case 2:cout<<"Middle Developer";break;
            case 3:cout<<"Senior Developer";break;
            case 4:cout<<"Hacker";break;
            default:cout<<"Jeff Dean";break;
        }
        cout<<endl;
    }
    return 0;
}
