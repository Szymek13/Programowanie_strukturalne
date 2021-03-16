#include <iostream>
#include <math.h>

using namespace std;

int potega(int n)
{
    int x = pow(2, n);
    return x;
}

int main()
{
    cout<<potega(13)<<endl;
    cout<<potega(5)<<endl;
    return 0;
}
