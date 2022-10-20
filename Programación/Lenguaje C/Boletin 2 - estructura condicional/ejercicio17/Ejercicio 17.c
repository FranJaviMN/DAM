#include <stdio.h>

void main(){
    
    float coordenada_x;
    float coordenada_y;

    printf("Dime el valor de la coordenada de X: ");
    scanf("%f",&coordenada_x);
    fflush(stdin);

    printf("Dime el valor de la coordenada de Y: ");
    scanf("%f",&coordenada_y);
    fflush(stdin);

    if (coordenada_x == 0 || coordenada_y == 0){
        printf("Los valores no pueden ser 0\n");
    }else if (coordenada_x > 0 && coordenada_y > 0){
        printf("Estas en el primer cuadrante\n");
    }else if (coordenada_x > 0 && coordenada_y < 0){
        printf("Estas en el cuadrante 2\n");
    }else if (coordenada_x < 0 && coordenada_y < 0){
        printf("Estas en el cuadrante 3\n");
    }else{
        printf("Estas en el cuadrante 4\n");
    }
}