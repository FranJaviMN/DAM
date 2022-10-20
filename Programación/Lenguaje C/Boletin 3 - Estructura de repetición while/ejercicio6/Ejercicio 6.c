#include <stdio.h>

void main (){

    float lista_1 = 0;
    float valor_lista_1;
    float lista_2 = 0;
    float valor_lista_2;
    int cont_veces = 1;

    printf("Dime 15 valores de la lista 1: ");
    scanf("\n%f",&valor_lista_1);
    fflush(stdin);

    lista_1 = lista_1 + valor_lista_1;

    cont_veces = cont_veces + 1;

    while (cont_veces <= 15){
        printf("Dime 15 valores de la lista 1: ");
        scanf("\n%f",&valor_lista_1);
        fflush(stdin);

        lista_1 = lista_1 + valor_lista_1;

        cont_veces = cont_veces + 1;

    }

    cont_veces = 1;

    printf("Dime 15 valores de la lista 2: ");
    scanf("\n%f",&valor_lista_2);
    fflush(stdin);

    lista_2 = lista_2 + valor_lista_2;

    cont_veces = cont_veces + 1;

    while (cont_veces <= 15){
        printf("Dime 15 valores de la lista 2: ");
        scanf("\n%f",&valor_lista_2);
        fflush(stdin);

        lista_2 = lista_2 + valor_lista_2;

        cont_veces = cont_veces + 1;

    }

    if (lista_1 > lista_2){
        printf("La lista 1 es mayor a la lista 2");
    }else{
        printf("La lista 2 es mayor a la lista 1");
    }


}