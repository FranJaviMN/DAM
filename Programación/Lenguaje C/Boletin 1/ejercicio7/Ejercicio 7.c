#include <stdio.h>

void main(){
    int monedas_50cent;
    int monedas_20cent;
    int monedas_10cent;
    int monedas_5cent;

    float cantidad_abonar;

    printf("Dime cuanto dinero debes de devolver: \n");
    scanf("%f\n",&cantidad_abonar);
    fflush(stdin);

    cantidad_abonar = cantidad_abonar*100;

    monedas_50cent = cantidad_abonar/50;

    printf("Monedas de 50 centimos %d",monedas_50cent);

}