#include <stdio.h>

void main(){

    float numero_1;
    printf("Dime el valor del numero: \n");
    scanf("%f",&numero_1);
    fflush(stdin);

    if (numero_1 > 0){
        printf("El numero es positivo\n");
    }else if (numero_1 < 0){
        printf("El numero es negativo\n");
    }else{
        printf("El numero es 0\n");
    }
}

