#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,j,t1,t2;
    while(getline(cin,s))
    {
        i=t1=t2=0;
        j=1;
        while(i<19&&j<20)
        {
            if(s[i]=='1')
                t1++;
            if(s[j]=='1')
                t2++;
            if(i<9)
            {
                if(t1-t2>5-(i/2+1))
                    {cout<<"TEAM-A "<<i+1;
                    break;
                    }
                else if(t2-t1>5-(j+1)/2)
                    {
                    cout<<"TEAM-B "<<j;
                    break;}
            }
            else
        {       if(t1>t2)
                    {
                          cout<<"TEAM-A "<<i+2;
                          break;
                    }
                    else if(t2>t1)
                    {
                          cout<<"TEAM-B "<<j+1;
                        break;
                    }

            }

            i+=2;
            j+=2;
        }
         if(t1==t2)
            cout<<"TIE";
         cout<<endl;

    }

        return 0;
}

