#include <stdio.h>

void main(){

    float numero_1;
    float numero_2;
    float numero_3;
    float numero_4;

    float resultado_suma;
    float resultado_multiplicacion;

    printf("Dime el valor de los cuatro numero: \n");
    scanf("%f",&numero_1);
    scanf("%f",&numero_2);
    scanf("%f",&numero_3);
    scanf("%f",&numero_4);
    fflush(stdin);

    resultado_multiplicacion = numero_3*numero_4;
    resultado_suma = numero_1+numero_2;

    printf("El resultado de la suma de los dos primeros es de %.2f y la multiplicación de los demas es de %.2f\n",resultado_suma,resultado_multiplicacion);
}