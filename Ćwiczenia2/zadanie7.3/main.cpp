#include <iostream>

using namespace std;

int main()
{
    int a;
    int par = 0;
    int npar = 0;
    int suma_par = 0;
    int suma_npar = 0;

    cout<<"Podaj dowolne liczby calkowite, program zatrzyma sie po wpisaniu 0"<<endl;

    do
    {
        cin>>a;

        if(a%2 == 0)
        {
            par++;
            suma_par += a;

        }
        if(a%2 == 1)
        {
            npar++;
            suma_npar += a;
        }

    }
    while(a!=0);

    cout<<"Zostalo podanych "<<par<<" parzystych liczb"<<endl;
    cout<<"A ich srednia wynosi: "<<suma_par/par<<endl;
    cout<<"Zostalo podanych "<<npar<<" nieparzystych liczb"<<endl;
    cout<<"A ich srednia wynosi: "<<suma_npar/npar<<endl;

    return 0;
}
