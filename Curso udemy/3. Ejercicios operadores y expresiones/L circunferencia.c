#include <stdio.h>
#define pi 3.1416
// Hacer un programa que calcule la longitud de una circunferencia
    int main(){

    float L, r;

    printf("Escribe el radio de la circunferencia\n");
    scanf("%f", &r);

    L= 2* pi*r;

    printf("La longitud de la circunferencia es de %.3f",L);

    return 0;
    }
