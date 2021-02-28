#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout<<"Podaj trzy liczby, a wskaze Ci najwieksza"<<endl;
    cout<<"Podaj pierwsza: "<<endl;
    cin>>a;
    cout<<"Podaj druga: "<<endl;
    cin>>b;
    cout<<"Podaj trzecia: "<<endl;
    cin>>c;

    if(a>=b && a>=c)
    {
        cout<<"To jest najwieksza liczba: "<<a<<endl;
    }
    else if(b>=a && b>=c)
    {
        cout<<"To jest najwieksza liczba: "<<b<<endl;
    }
    else if(c>=a && c>=b)
    {
        cout<<"To jest najwieksza liczba: "<<c<<endl;
    }
    return 0;
}
