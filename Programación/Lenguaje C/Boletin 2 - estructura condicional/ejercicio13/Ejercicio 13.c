#include <stdio.h>

void main(){

    int numero_cifras;

    printf("Dime un numero de 1, 2 o 3 cifras: \n");
    scanf("%i",&numero_cifras);
    fflush(stdin);

    if (numero_cifras >= 0 && numero_cifras < 10){
        printf("El numero es de 1 cifra\n");
    }else if (numero_cifras >= 10 && numero_cifras < 100){
        printf("El numero es de 2 cifras\n");
    }else if (numero_cifras >=100 && numero_cifras < 999){
        printf("El numero tiene 3 cifras\n");
    }else{
        printf("El numero tiene mas de 3 cifras o es 0\n");
    }
}