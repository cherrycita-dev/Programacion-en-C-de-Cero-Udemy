 #include <stdio.h>


 /* Ejercicio de prueba

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
   else{
    printf("La suma es mayor de 200");
   }

    }
*/

    //Saber si un alumno pasa o reprueba la materua
    int main(){

    float a;

    printf("Por favor digite su calificacion\n");
    scanf("%f",&a);

    if(a>=6){
        printf("Felicidades, estas aprobado");
    }
    else{
        printf("Lo lamento, reprobaste");
    }


    }
