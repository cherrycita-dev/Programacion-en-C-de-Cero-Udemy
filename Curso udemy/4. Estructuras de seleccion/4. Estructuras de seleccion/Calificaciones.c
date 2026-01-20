#include <stdio.h>

/* Decirle al alumno algo con base en sus calificaciones
9-10 Excelente, sigue asi
8-9 Muy bien, puedes mejorar
7-8 Eres un estudiante regular
0-6.9 Puedes mejorar
*/

    int main(){
    int calificacion;

    puts("Ingresa tu calificacion obtenida");
    scanf("%i",&calificacion);

    switch(calificacion){

    case 1: printf("Puedes mejorar");
    break;
    case 2: printf("Puedes mejorar");
    break;
    case 3: printf("Puedes mejorar");
    break;
    case 4: printf("Puedes mejorar");
    break;
    case 5: printf("Puedes mejorar");
    break;
    case 6: printf("Puedes mejorar");
    break;
    case 7: printf(" Eres un estudiante regular");
    break;
    case 8: printf(" Eres un estudiante regular");
    break;
    case 9: printf("Excelente, sigue asi");
    break;
    case 10: printf("Excelente, sigue asi");
    break;
    }
    return 0;
    }
