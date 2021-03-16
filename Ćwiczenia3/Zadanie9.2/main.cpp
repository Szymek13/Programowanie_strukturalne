#include <iostream>

using namespace std;

void rzad_zn(char ch, int i, int j)
{
    for(int k=0; k<i; k++)
    {
        for(int l=0; l<j; l++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    rzad_zn('m', 10, 10);
    cout<<endl;
    rzad_zn('ee', 5, 5);
    return 0;
}
