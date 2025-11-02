#include <stdio.h>


// °C a °F

    int main(){
    float C, F;

    printf("Ingrese los grados Celsius\n");

    scanf("%f", &C);

    F = ((C * 9 / 5) + 32);

    printf("La conversion es de %.2f",F);


    return 0;




    }


