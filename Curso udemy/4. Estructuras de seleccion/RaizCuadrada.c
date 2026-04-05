/*Ingresa un numero y calcule e imprima su raiz cuadrada
si el numero es negativo imprima el numero y un mensaje
que diga que tiene raiz imaginaria*/

#include <stdio.h>
#include <math.h>

    int main(){

    float resultado,num;

    printf("Ingresa el numero a calcular su raiz cuadrada\n");
    scanf("%f",&num);

    if (num >= 0){
        resultado = sqrt(num);
        printf("La raiz cuadrada es %.2f", resultado);
    }

    else {
        printf("El numero es %.2f y tiene raiz imaginaria ", num);
    }

    return 0;
    }
