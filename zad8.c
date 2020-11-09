#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double kwadrat;
    double szescian;
    double pierwiastek;

    printf("Podaj dodatnia liczbe zmiennoprzecinkowa a: ");
    scanf("%lf", &a);

    kwadrat = a * a;
    szescian = a * a * a;
    pierwiastek = sqrtl(a);

    printf("Kwadrat z liczby %.2lf: %.2lf\n", a, kwadrat);
    printf("Szescian z liczby %.2lf: %.2lf\n", a, szescian);
    printf("Pierwiastek z liczby %.2lf: %.2lf\n", a, pierwiastek);

    return 0;
}