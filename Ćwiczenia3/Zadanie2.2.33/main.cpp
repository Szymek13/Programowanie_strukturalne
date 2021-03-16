#include <iostream>

using namespace std;

int x;

unsigned int suma(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e)
{
    if(x == 5)
    {
       return a+b+c+d+e;
    }
    else if(x == 4)
    {
        return a+b+c+d;
    }
    else if(x == 3)
    {
        return a+b+c;
    }
    else if(x == 2)
    {
        return a+b;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout<<"Podaj ile liczb chcesz zsumowac (od 2 do 5):"<<endl;
    cin>>x;

    cout<<suma(3, 4, 5, 6, 7)<<endl;
    cout<<suma(12, 23, 34, 45, 56)<<endl;
    return 0;
}
