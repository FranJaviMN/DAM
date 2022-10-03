#include <stdio.h>

void main(){

    int numero_preguntas;
    int numero_preguntas_acertadas;
    int porcentaje;

    printf("Dime el numero de preguntas del test: ");
    scanf("%i",&numero_preguntas);

    printf("Dime el numero de preguntas acertadas: ");
    scanf("%i",&numero_preguntas_acertadas);
    fflush(stdin);

    porcentaje = (numero_preguntas_acertadas*100)/numero_preguntas;

    if (porcentaje >= 90){
        printf("Nivel maximo\n");
    }else if (porcentaje >=75 && porcentaje < 90){
        printf("Nivel medio\n");
    }else if (porcentaje >=50 && porcentaje < 75){
        printf("Nivel regular\n");
    }else{
        printf("Fuera de nivel\n");
    }
}