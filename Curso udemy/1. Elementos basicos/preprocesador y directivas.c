#include <stdio.h> // libreria

#define pi 3.1416 // macro


int y=5; // variable global

    int main(){

    int x= 10; // variable local
    float suma= 0;

    suma= pi + x;
    printf("La suma es: %.2f",suma); // cuantos flotantes quieres?
    return 0;

    }
