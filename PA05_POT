#include <iostream>
#include <cstdlib>

using namespace std;
int ile,podstawa,wykladnik;

int main()
{
    cin>>ile;
    for(int i = 0; i<ile; i++)
    {
       cin>>podstawa;
       cin>>wykladnik;
       switch(podstawa%10)
       {
        case 0: cout<<0<<endl; break;
        case 1: cout<<1<<endl; break;
        case 2: switch (wykladnik%4)
                {
                case 1: cout<<2<<endl; break;
                case 2: cout<<4<<endl; break;
                case 3: cout<<8<<endl; break;
                case 0: cout<<6<<endl; break;
                }
                break;
        case 3: switch (wykladnik%4)
                {
                case 1: cout<<3<<endl; break;
                case 2: cout<<9<<endl; break;
                case 3: cout<<7<<endl; break;
                case 0: cout<<1<<endl; break;
                }
                break;
        case 4: switch (wykladnik%4)
                {
                case 1: cout<<4<<endl; break;
                case 2: cout<<6<<endl; break;
                case 3: cout<<4<<endl; break;
                case 0: cout<<6<<endl; break;
                }
                break;
        case 5: cout<<5<<endl; break;
        case 6: cout<<6<<endl; break;
        case 7: switch (wykladnik%4)
                {
                case 1: cout<<7<<endl; break;
                case 2: cout<<9<<endl; break;
                case 3: cout<<3<<endl; break;
                case 0: cout<<1<<endl; break;
                }
                break;
        case 8: switch (wykladnik%4)
                {
                case 1: cout<<8<<endl; break;
                case 2: cout<<4<<endl; break;
                case 3: cout<<2<<endl; break;
                case 0: cout<<6<<endl; break;
                }
                break;
        case 9: switch (wykladnik%4)
                {
                case 1: cout<<9<<endl; break;
                case 2: cout<<1<<endl; break;
                case 3: cout<<9<<endl; break;
                case 0: cout<<1<<endl; break;
                }
                break;
       }
    }
    return 0;
}
