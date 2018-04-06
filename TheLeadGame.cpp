#include<iostream>
using namespace std;
int main()
{
    int t,a,b,sa=0,sb=0,lead,leader,mx=0,mxldr=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        sa+=a;
        sb+=b;
        if(sa<sb) {
			lead = sb-sa;
			leader = 2;
		}
		else {
			lead = sa-sb;
			leader = 1;
		}
		mx = mx>lead?mx:lead;
		if(mx == lead)
			mxldr = leader;

    }
    cout<<mxldr<<" "<<mx;
}
