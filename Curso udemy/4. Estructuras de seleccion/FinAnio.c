/*Una distribuidora de motocicletas tiene una promocion de fin de
 año que consiste en lo siguiente: Las motos marca Honda 5% descuento
 Yamaha del 8% y Suzuki del 10%, las otras marcas 2% */

#include <stdio.h>
#include <string.h>
#define Yamaha 0.08
#define Honda 0.05
#define Suzuki 0.1
#define defaul 0.02

    int main (){

    int precio, descuento,pfin,valor=0;
    char marca[10];

    printf("Ingresa la marca de la motocicleta \n");
    fgets(marca, 10, stdin);
    strtok(marca, "\n");

    printf("Ingresa el precio de la moto \n");
    scanf("%i", &precio);

    if (strcasecmp(marca,"Honda")==0){
        valor=1;
        }

    else if (strcasecmp(marca,"Yamaha")==0){
        valor=2;
        }

    else if (strcasecmp(marca,"Suzuki")==0){
        valor=3;
    }

    switch(valor){

    case 1:

    descuento = (precio*Honda);
    pfin= (precio-descuento);
    printf("El nuevo precio es $%i ", pfin);
    break;


    case 2:
    descuento = (precio*Yamaha);
    pfin= (precio-descuento);
    printf("El nuevo precio es $%i ", pfin);
    break;


    case 3:
    descuento = (precio*Suzuki);
    pfin= (precio-descuento);
    printf("El nuevo precio es $%i ", pfin);
    break;


    default:
    descuento = (precio*defaul);
    pfin= (precio-descuento);
    printf("El nuevo precio es $%i ", pfin);
    break;

    }
    return 0;
    }
