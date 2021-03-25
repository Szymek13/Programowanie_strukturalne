#include <iostream>

using namespace std;

double* pamiec()
{
    double* zmienna = (double*) malloc(sizeof(double));
    return zmienna;
}

int main()
{
    pamiec();
    return 0;
}
