#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout<<"Podaj dwie liczby calkowite, min i max: "<<endl;
    cin>>a;
    cin>>b;
    if(b<a)
    {
        cout<<"Liczby zostaly podane w odwrotnej kolejnosci"<<endl;
    }

    for(int i=a; i<=b; i++)
    {
        cout<<i<<"||"<<i*i<<"||"<<i*i*i<<endl;
    }

    return 0;
}
