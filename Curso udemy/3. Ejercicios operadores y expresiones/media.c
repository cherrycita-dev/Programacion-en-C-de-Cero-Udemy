# include <stdio.h>



    /* Calcule la media aritmetica de 3 numeros
    cualesquiera dados por el usuario */
    int main(){

    float num1,num2,num3, med;
    printf("Escriba el primer numero\n");
    scanf("%f", &num1);

    printf("Escriba el segundo numero\n");
    scanf("%f", &num2);

    printf("Escriba el tercer numero\n");
    scanf("%f", &num3);

    med= ((num1+num2+num3)/3);

    printf("La media aritmetica de los numeros ingresados es de %.4f", med);

    return 0;





    }
