#include <iostream>
#include <math.h>

using namespace std;

int potega(int m, int n)
{
    if(m>0 && n>=0)
    {
       return pow(m, n);
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout<<potega(2, 5)<<endl;
    cout<<potega(12, 0)<<endl;
    cout<<potega(0, 3)<<endl;
    return 0;
}
