#include <iostream>

using namespace std;

int ile;

int obz;

int cias;

int czas=86400;

float pud;


 

int main()

{

    cin>>ile;

    for(int o = 0; o<ile; o++)

   { cin>>obz;

    cin>>cias;

    int czasobz[obz];

    float ilecias[obz];

    for (int i = 0; i<obz; i++)

    {cin>>czasobz[i];

        ilecias[i]=czas/czasobz[i];

        pud += ilecias[i]/cias;

    }

    if((int)pud == pud)

    cout<<pud<<endl;

    else

    cout<<(int)pud + 1<<endl;

    pud = 0;

   }

    return 0;

}
