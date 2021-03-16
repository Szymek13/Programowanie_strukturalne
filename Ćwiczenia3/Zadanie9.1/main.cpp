#include <iostream>

using namespace std;

double min(int x, int y)
{
    if(x>y)
    {
        return y;
    }
    else
    {
        return x;
    }
}

int main()
{
    cout<<min(2,5)<<endl;
    cout<<min(5,1)<<endl;
    return 0;
}
