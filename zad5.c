#include <stdio.h>

int main()
{
    char *im1 = "Franek";
    int lat1 = 20;
    double wz1 = 1.83;
    char *im2 = "Ania";
    int lat2 = 120;
    double wz2 = 12.8;

    printf("|%-20s|", im1);
    printf("%20d|", lat1);
    printf("%10.2f|", wz1);

    printf("\n");

    printf("|%-20s|", im2);
    printf("%20d|", lat2);
    printf("%10.2f|", wz2);


    return 0;
}