#include <stdio.h>

void main(){

    int numero;

    printf("Dime un numero cualquiera: ");
    scanf("\n%i",&numero);
    fflush(stdin);

    if (numero < 0){
        printf("El numero es negativo.");
    }else if (numero == 0){
        printf("El numero es 0");
    }else{
        printf("El numero es positivo");
        if (numero%2 == 0){
            printf(" Y es un numero par");
        }else{
            printf(" y el numero es impar");
        }
    }
}