#include <iostream>

using namespace std;
int ile,licz1,licz2;

int nwd(int a, int b)
{
    int i = 1;
    int najwieksza=1;
    while(i<=a&&i<=b)
    {
        if(a%i==0&&b%i==0)
        {
            najwieksza=i;
            i++;
        }
        else
        {
            i++;
        }
    }
    return najwieksza;
}

int main()
{
    cin>>ile;
    for(int i = 0; i<ile; i++)
    {
        cin>>licz1;
        cin>>licz2;

        cout<<nwd(licz1,licz2)<<endl;

    }

return 0;
}
