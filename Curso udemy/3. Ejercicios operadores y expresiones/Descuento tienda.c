#include <stdio.h>


    /* Una tienda ofrece un descuento del 15% sobre el total de compra
    y un cliente desea saber cuanto debera pagar finalmente por su compra
    */

    int main(){

    float ini, desc,fin;

    printf("Por favor escriba el precio inicial del producto a comprar \n ");
    scanf("%f",&ini);

    desc= ini*.15;
    fin= ini-desc;

    printf("El descuento es de %.2f y el precio final es de %.2f " , desc, fin);

    return 0;

    }

