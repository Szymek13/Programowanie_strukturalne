#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    float delta;
    float pierw;
    float x1;
    float x2;

    cout<<"Program liczy pierwiastki rownania kwadratowego postaci ax^2 + bx + c = 0"<<endl;
    cout<<"Podaj wspolczynnik a: "<<endl;
    cin>>a;

    if(a==0)
    {
        cout<<"Wspolczynnik a nie moze byc rowny 0"<<endl;
        return 0;
    }

    cout<<"Podaj wspolczynnik b: "<<endl;
    cin>>b;
    cout<<"Podaj wspolczynnik c: "<<endl;
    cin>>c;

    delta = (b*b)-(4*a*c);

    if(delta<0)
    {
        cout<<"Rownanie nie ma rozwiazan"<<endl;
        return 0;
    }

    pierw = sqrt(delta);
    x1 = (-b - pierw)/(2*a);
    x2 = (-b + pierw)/(2*a);

    cout<<"Pierwsze rozwiazanie: "<<x1<<endl;
    cout<<"Drugie rozwiazanie: "<<x2<<endl;

    return 0;
}
