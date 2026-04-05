/* Visualizar la tarifa de luz segun el gasto de corriente electrica
para un gasto menor de 1.000kwxh la tarifa es de 1.2, entre 1.000 y 1.850kwxh
es 1.0 y mayor de 1.850kwxh 0.9 */



#include <stdio.h>
#define tarifa1 1.2
#define tarifa2 1.0
#define tarifa3 0.9


    int main(){
    float gasto;
    printf("Escribe el total del gasto de energia \n");
    scanf("%f", &gasto);


    if (gasto < 1000){
        printf("Dado que su gasto de luz fue de %f su tarifa es de %.2f", gasto, tarifa1);
    }

    else if (gasto >= 1000 && gasto <= 1850){
        printf("Dado que su gasto de luz fue de %f su tarifa es de %.2f", gasto, tarifa2);

    }
    else if (gasto > 1850){
        printf("Dado que su gasto de luz fue de %f su tarifa es de %.2f", gasto, tarifa3);
    }

    return 0;
    }
