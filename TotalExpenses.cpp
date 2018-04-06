#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long int qu,pr;
    scanf("%ld %ld",&qu,&pr);
    if (qu>1000) {
      printf("%lf",(double)(pr*qu)*(0.9));
    }else
      printf("%lf",(double)(pr*qu));
      printf("\n");
    }
    return 0;
}

