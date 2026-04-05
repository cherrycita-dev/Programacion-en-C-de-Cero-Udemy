#include <stdio.h>
#define saldo 154800

    int main(){

    int deposito, retiro, salir, menu, cantidad, nuevosaldo;


    printf("\t -----------------------------------\n");
    printf("\tBienvenido a tu cajero de confianza \n ");
    printf("\t -----------------------------------\n\n");


    printf("Selecciona la accion que quieras realizar \n");
    printf("1. Despositar\n");
    printf("2. Retirar \n");
    printf("3. Salir\n");

    scanf("%i", &menu);

    switch(menu){
    case 1: printf("\tIngrese la cantidad que desee depositar\n");
    scanf("%i", &cantidad);
    nuevosaldo= saldo+cantidad;
    printf("\tTu nuevo saldo es :%i ",nuevosaldo);
    break;
    }


    switch(menu){
    case 2: printf("\tIngrese la cantidad que desee retirar\n");
    scanf("%i", &cantidad);
    if (cantidad > saldo){
        printf("No tenemos disponible esta cantidad");
    }

    else  {
        nuevosaldo= saldo-cantidad;
    printf("\tTu nuevo saldo es :%i ",nuevosaldo);
    }


    break;
    }


    switch(menu){
    case 3: printf("\tGracias por utilizar el cajero");
    break;

    }

    return 0;

 }
