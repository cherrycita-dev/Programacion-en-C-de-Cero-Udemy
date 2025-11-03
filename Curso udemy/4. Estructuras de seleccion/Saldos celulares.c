
#define tarifa1 "basica"
#define tarifa2 "intermedia"
#define tarifa3 "premium"
#include <stdio.h>
/* Calcular tarifas de saldo en celulares
y poner precios
de 1000 a 1500 premium
de 500 a 999 Intermedia
de 100 a 499 basica*/



    int main(){
    float saldo;


    puts("Ingresa cuanto dinero en saldo estas dispuesto a pagar");
    scanf("%f",&saldo);

    if (saldo >= 100 && saldo <= 499 ){
        printf("La tarifa que mejor se adapta es %s", tarifa1);

    }

    else if(saldo >= 500 && saldo <= 999 ){
        printf("La tarifa que mejor se adapta es %s", tarifa2);
    }

    else if(saldo >= 1000 && saldo <= 1500 ){
        printf("La tarifa que mejor se adapta es %s", tarifa3);
    }
    else{
        printf("Ingresa un valor entre 100 a 1500");
    }


    return 0;
    }
