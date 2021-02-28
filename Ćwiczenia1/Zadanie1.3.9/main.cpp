#include <iostream>

using namespace std;

int m;

int main()
{
    int a;
    int b;
    int x;

    cout<<"PROSTY KALKULATOR"<<endl;
    cout<<"Podaj dwie liczby, a nastepnie wybierz operacje matematyczna, ktora chcesz policzyc"<<endl;
    cout<<"Pierwsza liczba: ";
    cin>>a;
    cout<<"Druga liczba: ";
    cin>>b;
    cout<<"Operacja matematyczna: 1-dodawanie, 2-odejmowanie, 3-mnozenie, 4-dzielenie: ";
    cin>>x;

    switch(x)
    {
    case 1:
        m = a+b;
        cout<<m;
        break;

    case 2:
        m = a-b;
        cout<<m;
        break;

    case 3:
        m = a*b;
        cout<<m;
        break;

    case 4:
        m = a/b;
        cout<<m;
        break;

    default:
        cout<<"Bledna wartosc";
        break;
    }

    return 0;
}
