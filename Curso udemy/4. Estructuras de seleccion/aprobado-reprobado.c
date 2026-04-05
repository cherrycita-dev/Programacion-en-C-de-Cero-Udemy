    /* Comprobar a traves de un programa si un alumno aprobo o no
    un examen (Aprueba si su nota es mayor a 5.5)
    */

#include <stdio.h>

    int main(){
    float cali;



    printf("Ingresa tu calificacion del examen \n");

    scanf("%f", &cali);

    (cali>= 5.5) ? printf("Apruebas") : printf("No apruebas");
    return 0;


    }
