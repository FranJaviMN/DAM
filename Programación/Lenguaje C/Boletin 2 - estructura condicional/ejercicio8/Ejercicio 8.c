#include <stdio.h>

void main(){

    int nota_1;
    int nota_2;
    int nota_3;

    float resultado_promedio;

    printf("Dime el valor de las tres notas: \n");
    scanf("%i",&nota_1);
    scanf("%i",&nota_2);
    scanf("%i",&nota_3);
    fflush(stdin);

    resultado_promedio = (nota_1+nota_2+nota_3)/4;

    if (resultado_promedio >= 7){
        printf("El alumno esta promocionado\n");
    }else{
        printf("El usuario no esta promocionado\n");
    }
}