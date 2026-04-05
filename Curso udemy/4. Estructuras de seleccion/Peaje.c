/* Seleccionar un tipo de vehiculo e indicar el peaje a pagar
segun un valor numerico
1- turismo, peaje = $500
2- autobus, peaje = $3000
3- motocicleta, peaje = $300
caso contrario, vehiculo no autorizado*/

#include <stdio.h>
#define turismo 500
#define autobus 3000
#define motocicleta 300

    int main(){
    int menu;


    printf("Ingresa el tipo de vehiculo a aplicar el peaje\n"
           "1) turismo\n"
           "2) autobus\n"
           "3) motocicleta\n");
    scanf("%i", &menu);

    switch(menu){

    case 1:
    printf("El peaje correspondiente de turismo es $%i", turismo);
    break;

    case 2:
    printf("El peaje correspondiente de autobus es $%i",autobus);
    break;

    case 3:
    printf("El peaje correspondiente de motocicleta es $%i",motocicleta);
    break;

    default:
        printf("Vehiculo no autorizado");

    }

    return 0;

    }
