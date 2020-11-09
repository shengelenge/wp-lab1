#include <stdio.h>

int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int c;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);
    printf("Podaj trzecia liczbe: ");
    scanf("%d", &c);

    printf("%d", c);
    printf("%d", b);
    printf("%d", a);

    return 0;
}