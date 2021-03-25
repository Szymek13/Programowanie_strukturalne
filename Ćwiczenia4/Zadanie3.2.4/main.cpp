#include <iostream>

using namespace std;

void zamiana(int * jeden, int * dwa)
{
    int a = jeden;
    int b = dwa;
    int pom;
    cout<<"Przed zamiana: "<<a<<", "<<b<<endl;
    if(a>b)
    {
        pom = b;
        b = a;
        a = pom;
    }
    cout<<"Po zamianie: "<<a<<", "<<b<<endl;
}

int main()
{
    zamiana()<<endl;
    return 0;
}
