/* Ingresa por teclado el nombre, la edad, y el sexo de
cualquier persona e imprima, solo si la persona es de
sexo femenino y mayor de edad el nombre de la persona*/

#include <stdio.h>
#include <string.h>


    int main(){
    int edad;
    char nombre [35], sexo [15];

    printf("Ingresa tu nombre \n");
    fgets(nombre,35,stdin);
    strtok(nombre,"\n");

    printf("Ingresa tu edad \n");
    scanf("%i",&edad);
    getchar();

    printf("Ingresa tu sexo (Femenino o Masculino) \n");
    fgets(sexo, 15,stdin);
    strtok(sexo,"\n");




    if (strcasecmp(sexo, "femenino")==0 && edad >= 18){
        printf("Tu nombre es %s", nombre);
    }
    else {
        printf("No cumple los requisitos");
    }

    return 0;
    }
