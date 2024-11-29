#include <stdio.h>
#include "MieFunzioni.h"
int main(void)
{
    int num1, num2;
    printf("Inserisci un numero: ");
    scanf("%d", &num1);
    printf("Inserisci un altro numero: ");
    scanf("%d", &num2);
    printf("La somma tra i numeri pari da il primo e il secondo numero e' %d\n", SommaNumeriPari(num1, num2));
    return 0;
}
