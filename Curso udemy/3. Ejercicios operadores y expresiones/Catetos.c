#include <stdio.h>
#include <math.h>

/* Sacar la hipotenusa de un triangulo rectangulo
pidiendo al usuario el valor de los 2 catetos*/

    int main(){

    float a,b,c;

    printf("Inserte el valor del primer cateto\n");
    scanf("%f",&a);

    printf("Inserte el valor del segundo cateto\n");
    scanf("%f",&b);

    c= sqrt( pow(a,2)+ pow(b,2));

    printf("El valor de la hipotenusa es de %.2f", c);

    return 0;

    }
