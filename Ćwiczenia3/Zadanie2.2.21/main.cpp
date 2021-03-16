#include <iostream>

using namespace std;

void ciag(int n)
{
    int a = 1;

    for(int i=0; i<n; i++)
    {
        cout<<a<<" ";
        a = 2*a + 5;
    }
}

int main()
{
    ciag(6);
    return 0;
}
