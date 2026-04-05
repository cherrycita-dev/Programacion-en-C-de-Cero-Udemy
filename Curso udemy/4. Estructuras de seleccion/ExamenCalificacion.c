/* Dada una nota de un examen mediante un codigo escribir
el literal que le corresponde a la nota

    A- Excelente
    B- Notable
    C- Aprobado
    D y F- Reprobado

*/

    #include <stdio.h>
    #include <stdlib.h>

    int main(){

    char calificacion;


    printf("Ingrese la nota obtenida en el examen (A-F) \n");
    scanf("%c",&calificacion);

    switch (calificacion){

    case'A':
        printf("Excelente");
        break;

    case 'B':
        printf("Notable");
        break;

    case 'C':
        printf("Aprobado");
        break;

    case 'D':
    case'F':
        printf("Reprobado");
        break;

    default:
        printf("Nota invalida \n");
        break;

    }



    return 0;

    }


