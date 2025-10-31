#include <stdio.h>


    // Aumentar el salario de una persona un 10%
    // nombre, salario actual, nuevo salario

    int main(){

    char nombre[50];
    float s_actual, s_nuevo;

    printf("Bienvenido, por favor ingrese un nombre\n");
    gets(nombre);

    printf("Ingresa tu saldo actual con numeros\n");
    scanf("%f", &s_actual);

    s_nuevo= (s_actual*0.10)+s_actual;


    printf("Hola %s tu nuevo salario es %.2f", nombre, s_nuevo);

    return 0;


    }
