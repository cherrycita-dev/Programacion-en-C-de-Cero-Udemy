#include <stdio.h>


/* Dadas las horas trabajadas de una persona y el valor por hora
calcular su salario e imprimirlo */


    int main(){


    float salario;
    int horas, total;

    printf("Bienvenido al programa, por favor digite las horas trabajadas\n");
    scanf("%i", &horas);

    printf("Ahora digite su el valor de las horas \n");
    scanf("%f", &salario);

    total= (horas*salario);

    printf("Tu salario es de %i", total);


}
