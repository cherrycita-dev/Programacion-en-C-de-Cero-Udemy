//Determinar si un numero es par o impar


    #include <stdio.h>



    int main(){
    int numero;

    printf("Ingresa el numero a determinar su paridad \n");
    scanf("%i", &numero);


    if (numero %2 ==0){
        printf("El numero es par");
    }
    else {
        printf("El numero es impar");
    }




    return 0;
    }
