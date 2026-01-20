#include <stdio.h>


// Calcular el MENOR de dos numeros


    int main(){

    float a, b;

    puts("Ingrese el primer numero a comparar");
    scanf("%f",&a);

    puts("Ingrese el segundo numero a comparar");
    scanf("%f",&b);

    if(a==b){
        printf("Los numeros son iguales, ingresa nuevos");

        }
    else if(a < b){
        printf("%.f es el menor  ",a);
    }

    else if( a > b){
         printf("%.2f es el menor",b);
    }

    return 0;
    }



