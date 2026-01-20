#include <stdio.h>

/*
    int main(){
    int dia;

    printf("Ingresa un numero del 1 al 7\n");
    scanf("%i",&dia);


    switch (dia){

    case 1: printf("Seleccionaste el dia Lunes");
    break;

    case 2: printf("Seleccionaste el dia Martes");
    break;

    case 3: printf("Seleccionaste el dia Miercoles");
    break;

    case 4: printf("Seleccionaste el dia Jueves");
    break;

    case 5: printf("Seleccionaste el dia Viernes");
    break;

    case 6: printf("Seleccionaste el dia Sabado");
    break;

    case 7: printf("Seleccionaste el dia Domingo");
    break;

    default:puts("ninguna de las anteriores") ;
    break;

    }

 }

 */

    int main(){
    char letra;

    printf("Selecciona una letra del alfabeto\n");
    scanf("%c",&letra);

    switch(letra){

    case 'a': printf("Seleccionaste la vocal a");
    break;
    case 'e': printf("Seleccionaste la vocal e");
    break;
    case 'i': printf("Seleccionaste la vocal i");
    break;
    case 'o': printf("Seleccionaste la vocal o");
    break;
    case 'u': printf("Seleccionaste la vocal u");
    break;

    default: printf("Ninguna de las anteriores");
    break;


    }



    }




