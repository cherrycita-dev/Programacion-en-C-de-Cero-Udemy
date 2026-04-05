/* Ingresa por teclado el nombre y el signo de cualquier persona
e imprima, el nombre solo si la persona es signo es aries,
de caso contrario imprima no es signo aries*/

#include <stdio.h>
#include <string.h>

    int main(){
    char nombre[55],signo[25];
    printf("Por favor ingrese su nombre\n ");
    fgets(nombre, 55, stdin);


    printf("Por favor ingrese su signo\n ");
    fgets(signo, 25, stdin);
    strtok(signo, "\n");

    if (strcasecmp(signo,"aries")==0){
        printf("Su nombre es %s", nombre);}

        else {
            printf("Su signo no es aries");
            }

    return 0;


 }
