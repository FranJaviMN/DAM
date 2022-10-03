#include <stdio.h>

void main(){

    float precio_articulo;
    int cantidad_producto;

    float total_pagar;

    printf("Dime el precio del articulo: ");
    scanf("%f",&precio_articulo);
    fflush(stdin);

    printf("Dime la cantidad de productos que lleva: ");
    scanf("%i",&cantidad_producto);
    fflush(stdin);

    total_pagar = cantidad_producto*precio_articulo;

    printf("El total a pagar es de %.2f",total_pagar);

}