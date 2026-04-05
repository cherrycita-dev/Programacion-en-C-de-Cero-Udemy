/* Hacer un menu que considere las siguientes opciones:

caso 1: Cubo de un numero
caso 2: Numero par o impar
caso 3: Salir */



#include <stdio.h>
#include <math.h>

    int main(){
    int menu, numero, exponente, resultado;

    printf("Ingresa la operacion que quieras realizar \n"
           "1) Cubo de un numero \n"
           "2) Numero par o impar \n"
           "3) Salir \n" );
    scanf("%i", &menu);


    switch(menu){

    case 1:
    printf("Ingresa el numero a elevar\n");
    scanf("%i",&numero);
    printf("Ingresa el exponente\n");
    scanf("%i", &exponente);
    resultado= pow(numero, exponente);
    printf("El resultado es %i", resultado);
    break;


    case 2:
    printf("Ingresa el numero a determinar su paridad \n") ;
    scanf("%i", &numero);

    if (numero %2 ==0){
        printf("El numero es par");
    }
    else {
        printf("El numero es impar");
    }
    break;


    case 3:
    break;


    default:
        printf("Operacion no valida");

    }


    return 0;


    }
