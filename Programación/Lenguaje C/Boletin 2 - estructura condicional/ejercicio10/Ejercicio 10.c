#include <stdio.h>

void main(){

    int numero_1;
    int numero_2;
    int numero_3;

    printf("Dime el valor de los tres numero: \n");
    scanf("%i",&numero_1);
    scanf("%i",&numero_2);
    scanf("%i",&numero_3);
    fflush(stdin);

    if (numero_1 > numero_2 && numero_1 > numero_3){
        printf("El numero %i es el mayor\n",numero_1);
    }else if (numero_2 > numero_1 && numero_2 > numero_3){
        printf("El numero %i es el mayor\n",numero_2);
    }else{
        printf("El numero %i es el mayor\n",numero_3);
    }
}