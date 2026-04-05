/* Comprobar que un numero digitado por el
usuario es positivo o negativo*/

#include <stdio.h>


    int main(){
    int num;

    printf("Ingresa el numero a determinar \n");
    scanf("%i",&num);

    if (num >= 0){
        printf("El numero ingresado es positivo");
    }
    else{
        printf("El numero ingresado es negativo");
    }

    return 0;

    }


