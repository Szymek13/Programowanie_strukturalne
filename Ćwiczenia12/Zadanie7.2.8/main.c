#include <stdio.h>
#include <stdlib.h>

struct student{
    char imie[32];
    char nazwisko[32];
    char adres[100];
    long int pesel;
    char kierunek[64];
    int numerLegitymacji;

};

void Studencik(struct student * wsk){
    scanf("%s", &wsk->imie);
    scanf("%s", &wsk->nazwisko);
    scanf("%s", &wsk->adres);
    scanf("%ld", &wsk->pesel);
    scanf("%ld", &wsk->kierunek);
    scanf("%d", &wsk->numerLegitymacji);
}

int main()
{
    return 0;
}
