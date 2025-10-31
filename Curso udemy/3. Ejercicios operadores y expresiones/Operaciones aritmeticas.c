#include <stdio.h>


// Pedirle al usuario que digite dos numeros y hacer las operaciones basicas con ellos

    int main(){
    int x,y,suma,resta,multiplicacion, division;

    printf("Ingrese el primer numero\n");
    scanf("%i",&x);

    printf("Ingrese el segundo numero numero\n");
    scanf("%i",&y);

    suma=0;
    suma=x+y;

    resta=0;
    resta=x-y;

    multiplicacion=0;
    multiplicacion=x*y;

    division=0;
    division=x/y;


    printf("La suma de los numeros es %i\n",suma);
    printf("La resta de los numeros es %i\n",resta);
    printf("La multiplicacion de los numeros es %i\n",multiplicacion);
    printf("La division de los numeros es %i\n",division);
    return 0;
}
