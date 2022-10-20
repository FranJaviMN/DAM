#include <stdio.h>

void main(){

    //Declaramos las variables necesarias, en este caso 6

    float valor_a;
    float valor_b;
    float valor_c;
    float valor_d;

    float valor_x;

    float ecuacion_grado_tres;

    //Pedimos los datos por pantalla

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

    //Realizamos el calculo de la ecuacion de grado 3

    ecuacion_grado_tres = valor_a*(valor_x*valor_x*valor_x)+valor_b*(valor_x*valor_x)+valor_c*valor_x+valor_d;

    //Mostramos por pantalla

    printf("El valor de la ecuación de tercer grado es de :%.2f",ecuacion_grado_tres);

}