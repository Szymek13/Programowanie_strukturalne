#include <stdio.h>
#include <stdlib.h>


void tablice(unsigned n, int tablica1[], int tablica2 [])
{
    int a;
    for(int i=0; i<n; i++)
    {
        a = tablica1[i];
        tablica2 = a;
    }
    for(int i=0; i<n; i++)
    {
        printf("Nowa tablica %d", tablica2[i]);
    }
}

int main()
{
    int tablica1[5] = {2, 4, 6, 5, 3};
    int tablica2[5];
    tablice(5, tablica1, tablica2);
    return 0;
}
