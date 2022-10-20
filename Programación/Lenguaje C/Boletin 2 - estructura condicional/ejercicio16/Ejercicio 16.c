#include <stdio.h>

void main(){

    float numero_1;
    float numero_2;
    float numero_3;

    float resultado_suma;
    float resultado_multiplicacion;

    printf("Dime el valor de los tres numero: \n");
    scanf("%f",&numero_1);
    scanf("%f",&numero_2);
    scanf("%f",&numero_3);
    fflush(stdin);

    if (numero_1 < 10 && numero_2 < 10 && numero_3 < 10){
        printf("Los valores que has introducido son menores a 10\n");
    }else{
        printf("No son menores de 10\n");
    }
}