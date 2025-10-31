#include <stdio.h>

// Area de trapecio

    int main(){


    int bM, bm, h, area;

    printf("Ingresa el valor de la base mayor\n");
    scanf("%i", &bM);
    printf("Ingresa el valor de la base menor\n");
    scanf("%i", &bm);
    printf("Ingresa el valor de la altura\n");
    scanf("%i", &h);

    area= ((bM+bm)*h)/2;

    printf("El area de el trapecio es %i", area);
    return 0;

    }

