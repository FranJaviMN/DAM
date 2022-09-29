#include <stdio.h>

void main(){
    float precio_coste;
    float margen;

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

    float valor_neto = (precio_coste)*((100+margen)/100);

    printf("El valor neto es de %.2f",valor_neto);
}