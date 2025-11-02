#include <stdio.h>



    /*
    Calcular la cantidad de segundos que estan incluidos en el numero de horas
    minutos y segundos ingresados por el usuario
    */



    int main(){

    int horas, min, segundos, total;

    printf("Ingrese el numero de horas\n");

    scanf("%i",&horas);

    printf("Ingrese el numero de minutos\n");
    scanf("%i",&min);

    printf("Ingrese el numero de segundos\n");
    scanf("%i",&segundos);

    total=((horas*3600)+(min*60)+ segundos);

    printf("El total en segundo es de %i", total);

    return 0;


    }


