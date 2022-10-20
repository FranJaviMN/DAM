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

    if (numero_1 == numero_2 && numero_1 == numero_3 && numero_2 == numero_3){
        resultado_suma = numero_1+numero_2;
        resultado_multiplicacion = resultado_suma*numero_3;
        printf("El resultado de la suma y multiplicación es de %.1f\n",resultado_multiplicacion);
    }else{
        printf("Los tres valores no son iguales...\n");
    }
}