#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,i,l,m,s;
	char d;
	cin>>t;
	while(t--)
	{   s=m=0;
		string a;
		cin>>a;
		l=a.length();
		for(i=0;i<l;++i){
		if(a[i]=='s'){
			++s;
			d='s';
		}
		if(a[i]=='m'){
			++m;
			if(d=='s'){
				d='n';
				--s;
			}
			else if(i+1<l){
				if(a[i+1]=='s'){
					d='n';
					++i;
				}
				else
					d='n';
			}
		}
	}
	if(s==m)
		cout<<"tie\n";
	else if(s>m)
		cout<<"snakes\n";
	else
        cout<<"mongooses\n";

	}
	return 0;
}
