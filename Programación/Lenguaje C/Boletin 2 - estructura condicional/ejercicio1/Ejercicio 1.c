#include <stdio.h>

void main(){

    float valor_num1;
    float valor_num2;
    float valor_num3;

    printf("Dime los tres numeros a continuación: \n");
    scanf("%f",&valor_num1);
    scanf("%f",&valor_num2);
    scanf("%f",&valor_num3);
    fflush(stdin);

    if (valor_num1 > valor_num2 &&  valor_num1 > valor_num3){
        printf("El valor %.1f es el mayor",valor_num1);
    } else if (valor_num2 > valor_num1 && valor_num2 > valor_num3){
        printf("El valor %.1f es el mayor",valor_num2);
    } else{
        printf("El valor %.1f es el mayor\n",valor_num3);
    }
}