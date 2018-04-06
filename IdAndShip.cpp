#include<iostream>
using namespace std;
int main()
{
    int t;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>c;
        switch(c)
        {
        case 'c':
        case 'C':cout<<"Cruiser";
                break;
        case 'b':
        case 'B':cout<<"BattleShip";
                break;
        case 'd':
        case 'D':cout<<"Destroyer";
                break;
        default :cout<<"Frigate";
                break;

        }
        cout<<endl;
    }
    return 0;
}
