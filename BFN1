#include <iostream>

using namespace std;
int ile,ilerazy,palindrom,liczba,bufor,pomoc;


int main()
{
    cin>>ile;
    for(int i = 0; i<ile; i++)
    {
        cin>>liczba;
        palindrom=0;
        ilerazy=0;
        while(liczba!=palindrom)
        {
        bufor=liczba;
        palindrom=0;
        while(bufor!=0)
        {
            pomoc=bufor%10;
            palindrom=palindrom*10+pomoc;
            bufor/=10;
        }
        if(liczba==palindrom)
        {
            cout<<liczba<<" "<<ilerazy<<endl;
        }
        else
        {
         liczba+=palindrom;
         ilerazy++;
        }
        }

    }
    return 0;
}
