#include <stdio.h>
#include <stdlib.h>

struct zespolone{
    double im;
    double re;
};

void dodaj(struct zespolone x, struct zespolone y){

    double complex x1 = x.re + x.im;
    double complex y1 = y.re + y.im;
    double complex wynik = x1 + y1;

    printf("%.2f", wynik);
}

int main()
{
    struct zespolone1 x;
    struct zespolone1 y;
    x.re = 5.0;
    x.im = 3.0;
    y.re = 1.0;
    y.im = 9.0;
    dodaj(x, y);
    return 0;
}
