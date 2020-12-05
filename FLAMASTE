#include <iostream>

using namespace std;
int ile;
string wyraz;
int liczba=1;
int j=0;
int dlugosc;

int main()
{
    cin>>ile;
    for(int i = 0; i<ile; i++)
    {
        j=0;
        liczba=1;
        cin>>wyraz;
        dlugosc = wyraz.size();
        while(j<dlugosc)
        {
             if(wyraz[j]==wyraz[j+1]&&wyraz[j]==wyraz[j+2])
            {
                cout<<wyraz[j];
                while(wyraz[j]==wyraz[j+1])
                {
                liczba++;
                j++;
                }
                cout<<liczba;
                liczba=1;
                j++;
            }
            else if(wyraz[j]==wyraz[j+1]&&wyraz[j]!=wyraz[j+2])
           {

                cout<<wyraz[j];
                cout<<wyraz[j];
                j++;
                j++;
            }
            else if(wyraz[j]!=wyraz[j+1])
        {
            cout<<wyraz[j];
            j++;
        }

    }
    cout<<endl;
    }
    return 0;
}
