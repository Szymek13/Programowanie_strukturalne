#include <iostream>

using namespace std;

int main()
{
    char znak='F';

    for(int i=0; i<6; i++)
    {
        for(int k=0; k<=i; k++)
        {
            cout<<znak;
            znak--;
        }
        cout<<endl;
        znak='F';
    }

    return 0;
}
