#include <stdio.h>
#include <stdbool.h>

int main(){

    int a=1.5; // 2 bytes rango desde -32768 a 32767

    char b='z'; // 1 byte de 0 a 255

    float c=1.5; // 4 bytes

    double d= 1.55555555555555555; // 8 bytes

    short v= 2; // 2 bytes desde -128 a 127

    unsigned int n=123; // solo positivos 2 byes a 65535

    long e=12.3; // 4 bytes

    long double f= 12.34363545;

    printf("El valor del entero es de %i \n", a);
    printf("El valor de char es de %c\n", b);
    printf("El valor de float es de %f\n",c);
    printf("El valor de double es de %d\n",d);
    printf("El valor de short es de %i\n",v);
    printf("El valor de long es de %li\n",e);
    printf("El valor de unsigned es de %i\n",n);
    //printf("El valor de long double es de %ld\n",f);

    return 0;

}
