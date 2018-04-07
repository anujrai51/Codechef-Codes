#include <iostream>
#include <fstream>
using namespace std;
//Commands to be entered as printf(x)
int main()
{	ofstream filex;
    unsigned long n,i,l;
    string s,p;
    cin>>n;  //No. of entries
    for(i=0;i<n;i++)
    {
        cin>>p;    //No. entered and stored as single string
        l=p.length();
        s+=p.substr(7,l-8);
        s+="\n";
    }
	filex.open("TEXTFILE.txt",ios::app);
	filex<<s;   //writing the stored string into file
    filex.close();
    return 0;
}
