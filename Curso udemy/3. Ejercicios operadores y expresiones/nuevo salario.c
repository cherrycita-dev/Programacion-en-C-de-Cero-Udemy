#include <stdio.h>

/* Calcular el nuevo salario de un obrero 1239
si obtuvo un incremento de 25% sobre su salario anterior*/

    int main(){


    float s_actual, s_nuevo;

    printf("Ingrese su salario actual\n");
    scanf("%f", &s_actual);

    s_nuevo= ((s_actual*.25) + s_actual);

    printf("Su nuevo salario es de %.3f", s_nuevo);

    return 0;


    }


