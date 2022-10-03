#include <stdio.h>

void main(){

    float valor_a;
    float valor_b;
    float valor_c;
    float valor_d;

    float valor_x;

    float ecuacion_grado_tres;

    printf("Dime el valor del coeficiente de a: ");
    scanf("%f",&valor_a);
    fflush(stdin);

    printf("Dime el valor del coeficiente de b: ");
    scanf("%f",&valor_b);
    fflush(stdin);

    printf("Dime el valor del coeficiente de c: ");
    scanf("%f",&valor_c);
    fflush(stdin);

    printf("Dime el valor del coeficiente de d: ");
    scanf("%f",&valor_d);
    fflush(stdin);

    printf("Dime el valor del coeficiente de x: ");
    scanf("%f",&valor_x);
    fflush(stdin);

    ecuacion_grado_tres = valor_a*(valor_x*valor_x*valor_x)+valor_b*(valor_x*valor_x)+valor_c*valor_x+valor_d;

    printf("El valor de la ecuación de tercer grado es de :%.2f",ecuacion_grado_tres);

}