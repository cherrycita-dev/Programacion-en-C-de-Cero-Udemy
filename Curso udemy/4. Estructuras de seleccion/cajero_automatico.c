/* Hacer un programa que simule un cajero automatico
con un saldo inicial de 1,000 dolares*/

#include <stdio.h>
#define saldo 1000
    int main(){

    int opcion, actual, monto;
    do{
    printf("Bienvenido a su cajero virtual \nSeleccione la accion deseada\n");
    printf("1. Agregar dinero\n");
    printf("2. Retirar dinero\n");
    printf("3. Ver saldo actual\n");
    printf("4. Salir\n");
    scanf("%i", &opcion);

    switch (opcion){

    case 1:
        printf("Ingrese el monto a agregar\n");
        scanf("%i", &monto);
        actual= saldo+monto;
        //printf("El saldo actual es de: %i", actual);
    break;

    case 2:
        printf("Ingrese el monto que desea retirar\n");
        scanf("%i", &monto);
        actual= saldo-monto;
        printf("El saldo actual es de: %i", actual);
    break;

    case 3:
        printf("Tu saldo actual es %i \n",actual);

    break;

    case 4:
        printf("Gracias por utilizar nuestro cajero");
    break;

     default:
        printf("Opcion no disponible");
    }
} while (opcion != 4);


    return 0;

    }


