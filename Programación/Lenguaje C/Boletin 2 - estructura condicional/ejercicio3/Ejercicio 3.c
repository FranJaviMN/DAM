#include <stdio.h>

void main(){

    float lado_cuadrado;
    float perimetro_cuadrado;

    printf("Dime el tamañp del lado del cuadrado: ");
    scanf("%f",&lado_cuadrado);
    fflush(stdin);

    if (lado_cuadrado > 0){
        perimetro_cuadrado = lado_cuadrado*4;
        printf("El tamaño del perimetro es de %.2f",perimetro_cuadrado);
    } else{
        printf("El lado del cuadrado no puede ser menor que 0");
    }
}