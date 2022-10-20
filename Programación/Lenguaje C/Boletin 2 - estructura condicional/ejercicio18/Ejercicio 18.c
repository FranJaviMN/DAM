#include <stdio.h>

void main(){

    float sueldo_operario;
    int anos_antiguedad;
    float aumento_sueldo;

    printf("Dime el sueldo: ");
    scanf("%f",&sueldo_operario);
    fflush(stdin);

    printf("Dime la antiguedad: ");
    scanf("%i",&anos_antiguedad);
    fflush(stdin);

    if (sueldo_operario < 500 && anos_antiguedad >=10){
        aumento_sueldo=sueldo_operario*1.20;
        printf("El sueldo se ha aumentado un, ahora es de %.1f\n",aumento_sueldo);
    }else if (sueldo_operario < 500 && anos_antiguedad < 10){
        aumento_sueldo=sueldo_operario*1.05;
        printf("El sueldo se ha aumentado un, ahora es de %.3f\n",aumento_sueldo);
    }else if (sueldo_operario >= 500){
        printf("El sueldo es de %f\n",sueldo_operario);
    }else{
        printf("No hay casos para eso.\n");
    }



}