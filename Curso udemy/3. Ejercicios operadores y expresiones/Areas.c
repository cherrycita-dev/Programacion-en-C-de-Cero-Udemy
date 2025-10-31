#include <stdio.h>
#include <math.h>
// Calcular areas de figuras

    int main(){

   /* float b,h, tri;

    printf("Este programa calcula el area de un triangulo\n");

    printf("Inserta el valor de la base \n");
    scanf("%f",&b);

    printf("Inserta el valor de la altura \n");
    scanf("%f",&h);

    tri=((b*h)/2);

    printf("El area del triangulo es %.2f", tri);*/



    float lado, area;
    printf("Este programa calcula el area de un cuadrado\n");

    printf("Inserta el valor del lado\n");
    scanf("%f",&lado);


    area=pow(lado,2);
  printf("El area del cuadrado es %.2f", area);

    return 0;
}
