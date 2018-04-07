#include <iostream>
#include <fstream>
using namespace std;
int main()
{	ofstream filex;
    unsigned long n,i;
    string s,p;
    cin>>n;  //No. of entries
    for(i=0;i<n;i++)
    {
        cin>>p;    //No. entered and stored as single string
        s+=p;
        s+="\n";
    }
	filex.open("TEXTFILE.txt",ios::app);
	filex<<s;   //writing the stored string into file
    filex.close();
    return 0;
}
