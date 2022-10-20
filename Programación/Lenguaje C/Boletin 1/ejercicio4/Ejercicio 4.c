//Incluimos la libreria de entrada y salida

#include <stdio.h>

//Declaramos la variable principal main

void main(){

    //Declaramos las variables que necesitamos

    float precio_coste;
    float margen;

    //Pedimos por pantalla los datos que necesitamos, en este caso solo dos

    printf("Digame el precio del producto: ");
    printf("\n");

    scanf("%f",&precio_coste);
    fflush(stdin);
    printf("\n");

    printf("Indicame el marge en porcentaje: ");
    printf("\n");
    scanf("%f",&margen);
    fflush(stdin);
    printf("\n");

    //Declaramos la variable y la rellenamos con el calculo del precio neto

    float valor_neto = (precio_coste)*((100+margen)/100);

    printf("El valor neto es de %.2f",valor_neto);
}