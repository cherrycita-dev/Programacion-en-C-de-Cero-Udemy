#include <stdio.h>


/* Ver si un alumno va a pasar de año o no
un alumno solo tiene derecho a reprobar 3 materias para poder pasar de año
si reprueba 4 materias no puede pasar de año y recursar*/


    int main(){
    int reprobadas;
    puts("Ingresa el numero de materias reprobadas");
    scanf("%i", &reprobadas);
    (reprobadas>=4) ? printf("No puedes pasar de año y debes recursar") : printf("Puedes continuar");

    return 0;


    }

