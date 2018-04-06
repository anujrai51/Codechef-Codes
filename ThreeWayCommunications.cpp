#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,x1,x2,x3,y1,y2,y3,c;
    float r;
    cin>>t;
    while(t--)
    {   c=0;
        cin>>r;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        float p1,p2,p3;
        if((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)<=r*r)
            c++;
        if((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)<=r*r)
            c++;
        if((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2)<=r*r)
            c++;
        if(c>=2)
            cout<<"yes\n";
        else
            cout<<"no\n";


    }
    return 0;
}
