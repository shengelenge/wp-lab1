#include <stdio.h>

int main()
{
    unsigned int a;
    unsigned int b;
    int iloczyn;
    int suma;
    int roznica;

    printf("Podaj liczbe a: ");
    scanf("%d", &a);
    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    iloczyn = a * b;
    suma = a + b;
    roznica = a - b;

    printf("Iloczyn %d i %d: %d\n", a, b, iloczyn);
    printf("Suma %d i %d: %d\n", a, b, suma);
    printf("Roznica %d i %d: %d\n", a, b, roznica);

    return 0;
}