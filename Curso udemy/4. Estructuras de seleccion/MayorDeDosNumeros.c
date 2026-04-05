/* Calcular el mayor de dos numeros leidos del teclado y
visualizarlo en pantalla*/


#include <stdio.h>

    int main(){
    int num1, num2, resultados;


    printf("Este es un programa que devuelve el numero mayor\n");
    printf("------------------------------------------ \n");
    printf("Ingresa el primer numero \n");
    scanf("%i",&num1);

    printf("Ingresa el segundo numero \n");
    scanf("%i",&num2);

    if (num1 > num2){
        printf("El numero mayor es %i", num1);
    }

    else if(num1<num2){
        printf("El numero mayor es %i",num2);

    }

    else if (num1 == num2){
        printf("Los numeros son iguales, no hay un mayor");
    }

    return 0;
    }
