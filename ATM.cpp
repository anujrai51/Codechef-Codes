#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a;
    float b;
    cin>>a>>b;
    if(a>b-0.5||a%5!=0)
        printf("%.2f",b);
    else
        printf("%.2f",b-a-0.5);
    return 0;
}
