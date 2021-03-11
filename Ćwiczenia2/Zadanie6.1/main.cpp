#include <iostream>

using namespace std;

int main()
{
    char znaki[26];
    int i=0;
    char znak='a';

    while(znak<='z')
    {
        znaki[i] = znak;
        i++;
        znak++;
    }

    for(int i=0; i<26; i++)
    {
        cout<<znaki[i]<<' ';
    }

    return 0;
}
