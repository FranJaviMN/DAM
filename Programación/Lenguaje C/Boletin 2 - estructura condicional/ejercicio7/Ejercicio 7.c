#include <stdio.h>

void main(){

    float numero_1;
    float numero_2;

    float suma_numeros;
    float resta_numeros;

    float multiplicacion_numeros;
    float division_numeros;

    printf("Dime los dos numeros: \n");
    scanf("%f",&numero_1);
    scanf("%f",&numero_2);
    fflush(stdin);

    if (numero_1 > numero_2){
        suma_numeros = numero_1+numero_2;
        resta_numeros = numero_1-numero_2;
        printf("La suma de los numeros es de %.1f y la restar es de %.1f",suma_numeros,resta_numeros);
    } else{
        multiplicacion_numeros = numero_1*numero_2;
        division_numeros = numero_1/numero_2;

        printf("La multiplicacion de los numeros es de %.1f y la division es de %.1f",multiplicacion_numeros,division_numeros);
    }
}