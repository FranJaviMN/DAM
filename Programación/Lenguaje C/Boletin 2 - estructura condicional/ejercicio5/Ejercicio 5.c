#include <stdio.h>

void main(){

    float numero_1;
    float numero_2;
    float numero_3;
    float numero_4;

    float resultado_suma;
    float resultado_promedio;

    printf("Dime el valor de los cuatro numero: \n");
    scanf("%f",&numero_1);
    scanf("%f",&numero_2);
    scanf("%f",&numero_3);
    scanf("%f",&numero_4);
    fflush(stdin);

    resultado_suma = numero_1+numero_2+numero_3+numero_4;
    resultado_promedio = resultado_suma/4;

    printf("La suma de los numeros es de %2.f y el promedio es de %.2f",resultado_suma,resultado_promedio);

}