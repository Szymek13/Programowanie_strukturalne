#include <stdio.h>
#include <stdlib.h>

int **alokowanie(int n, int m, int wsk))[]
{
    return malloc(n*m*sizeof(int[wsk]));
}

void usuwanie(int n,int m, int tab[][n][m])
{
    free(tab);
}
