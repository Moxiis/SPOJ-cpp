#include <iostream>

using namespace std;
int ile;
int grupaa, grupab;
int jot;
bool koniec;

int main()
{
    cin>>ile;
    for(int i = 0; i<ile; i++)
    {
        koniec=false;
        cin>>grupaa;
        cin>>grupab;
        if(grupaa>grupab)
        {
            jot=grupaa;
        }
        else
        {
            jot=grupab;
        }
        while(koniec!=true)
        {
            if(jot%grupaa==0&&jot%grupab==0)
            {
                koniec=true;
                cout<<jot;
            }
        else
        {
            jot++;
        }
        }
        cout<<endl;
    }
    return 0;
}
