#include <iostream>

using namespace std;

int main()
{
    int n;
    int suma = 0;

    cout<<"Podaj dowolna nieujemna liczbe: ";
    cin>>n;

    if(n<0)
    {
        cout<<"Zostala podana ujemna liczba"<<endl;
        return 0;
    }

    for(int i=0; i<=n; i++)
    {
        int c = i*i;
        suma=suma+c;
    }

    cout<<"Suma kolejnych kwadratow do 0 do "<<n<<" wynosi: "<<suma;

    return 0;
}
