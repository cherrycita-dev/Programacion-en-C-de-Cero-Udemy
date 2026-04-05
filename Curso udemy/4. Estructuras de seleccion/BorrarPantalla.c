/* Hacer un programa que al presionar 1 borre la pantalla */



#include <stdio.h>
#include <stdlib.h>

    int main(){

    int opcion;
    printf("Programa que borra la pantalla, presionar 1 \n");
    printf("----------------------------------------- \n");
    scanf("%i", &opcion);

    switch (opcion){

    case 1:
        system("cls");
        printf("Se ha borrado tu pantalla");
    break;

    case 2:
        printf("El numero ingresado no es 1, intente de nuevo \n");
        scanf("%i", &opcion);
    break;

    }

    return 0;

    }








