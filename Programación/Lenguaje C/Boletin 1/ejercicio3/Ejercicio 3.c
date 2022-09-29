// Incluimos la libreria de entrada y salida.

#include <stdio.h>

void main(){
    int valor_numero;
    printf("Indica un numero que quieras mostrar: ");
    printf("\n");
    scanf("%d",&valor_numero);
    fflush(stdin);
    printf("\n");
    printf("El valor del numero es %d",valor_numero);
    printf("\n");
}