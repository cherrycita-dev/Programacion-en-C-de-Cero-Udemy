#include <stdio.h>


// Conversion de años en meses, semanas, dias y horas


    int main(){

    int edad, mes, semana, dias, horas;

    printf("Digita tu edad\n");
    scanf("%i",&edad);

    mes= (edad * 12);
    semana=(mes * 4);
    dias= (semana * 7);
    horas= (dias * 24);

    printf("Tu edad en meses es %i\n", mes);
    printf("Tu edad en semanas es %i\n", semana);
    printf("Tu edad en dias es %i\n", dias);
    printf("Tu edad en horas es %i\n", horas);

    return 0;

    }
