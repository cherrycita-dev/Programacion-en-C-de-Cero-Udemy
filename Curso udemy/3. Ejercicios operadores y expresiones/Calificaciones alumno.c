#include <stdio.h>


    /*
    Un alumno desea calcular su calificacion final de algoritmos la cual se compone de
    55% del promedio de sus tres calificaciones parciales
    30% de la calificacion del examen final
    15% de la calificacion de un trabajo final
    */


    int main (){

    float cal1, cal2, cal3, prom, examenf, trabajof, fin;

    printf("Bienvenido, por favor escribe tu primer calificacion parcial\n");
    scanf("%f",&cal1);

    printf("Escribe tu segunda calificacion parcial\n");
    scanf("%f",&cal2);

    printf("Escribe tu tercer calificacion parcial\n");
    scanf("%f",&cal3);


    printf("Escribe tu calificacion del examen final\n");
    scanf("%f",&examenf);

    printf("Escribe tu calificacion del trabajo final\n");
    scanf("%f",&trabajof);

    fin=((((cal1+cal2+cal3)/3)*.55)+(examenf*.30) + (trabajof*.15));

    printf("Su calificacion final de algoritmos es de %.2f", fin);


    }





