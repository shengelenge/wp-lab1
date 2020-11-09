#include <stdio.h>

int main()
{
    unsigned int x;
    int a, b, c, d;

    printf("Podaj liczbe naturalna: ");
    scanf("%d", &x);

    a = x % 2;
    b = x % 3;
    c = x % 5;
    d = x % 7;

    printf("Reszta z dzielenia liczby %d przez 2: %d\n", x, a);
    printf("Reszta z dzielenia liczby %d przez 3: %d\n", x, b);
    printf("Reszta z dzielenia liczby %d przez 5: %d\n", x, c);
    printf("Reszta z dzielenia liczby %d przez 7: %d\n", x, d);

    return 0;
}