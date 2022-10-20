#include <stdio.h>

void main(){

    int cont_personas;
    int altura;
    int num_veces = 1;
    int total_altura = 0;
    float promedio_altura;

    printf("Dime el numero de personas que quieres introducir: ");
    scanf("\n%i",&cont_personas);
    fflush(stdin);

    printf("Dime la altura de la persona numero %i (en cm): ",num_veces);
    scanf("\n%i",&altura);
    fflush(stdin);
    total_altura = total_altura + altura;
    num_veces = num_veces +1;

    while (num_veces <= cont_personas){
        printf("Dime la altura de la persona numero %i (en cm): ",num_veces);
        scanf("\n%i",&altura);
        fflush(stdin);
        total_altura = total_altura + altura;
        num_veces = num_veces +1;
    }

    promedio_altura = total_altura/cont_personas;

    printf("La altura total es de %.2f",promedio_altura);


}