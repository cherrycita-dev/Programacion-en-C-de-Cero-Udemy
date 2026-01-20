#include <stdio.h>

/*Prueba

    int main(){
    int a,b,c;
        a=b=3;
        c=a+b;

        if (a+b==6){
        printf("El resultado es %i",c);
			}
}

*/

// Si el usuario digita los numeros
    int main(){

   float a,b,c;

    printf("Por favor digite el primer numero\n");
    scanf("%f",&a);

    printf("Por favor digite el segundo numero\n");
    scanf("%f",&b);

    c=a+b;

   if(c==200){
    printf("La suma es de 200");
   }
   if(c<200){
    printf("La suma es menor de 200");
   }
   if(c>200){
    printf("La suma es mayor de 200");
   }


    }


