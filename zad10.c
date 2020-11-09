#include <stdio.h>

int main()
{
    double kurs;
    double kwotaW;
    double kwota;
    double przelicznik;

    printf("Podaj kurs waluty: ");
    scanf("%lf", &kurs);
    printf("Podaj ilosc posiadanych pieniedzy w tej walucie: ");
    scanf("%lf", &kwotaW);

    przelicznik = kurs * kwotaW;
    kwota = przelicznik;

    printf("---------------------------------------------------------\n");
    printf("| Kwota w walucie |       Kurs       |     Kwota w zl   |\n");
    printf("---------------------------------------------------------\n");
    printf("|%17.2lf|%18.2lf|%18.2lf|\n", kwotaW, kurs, kwota);
    printf("---------------------------------------------------------\n");




    return 0;
}