#include <stdio.h>
#include <stdlib.h>
int ***tablice(int n,int m,int wsk)
{
    int ***tab = malloc(n*sizeof(int**));
    int x, y;
    for (x = 0; x < n; x++)
    {
        for (y = 0; x < m; y++)
            tab[y] = malloc(wsk*sizeof(int));
    }
    return tab;
}
void usuwanie(int n, int m, int wsk, int ***tab)
{
    int x, y;
    for (x = 0; x < n; x++)
    {
        for (y = 0; x <m; x++)
            free(tab[x]);
        free(tab);
    }
}
