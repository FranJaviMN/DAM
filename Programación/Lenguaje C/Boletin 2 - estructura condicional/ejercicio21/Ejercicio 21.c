#include <stdio.h>

void main(){

    int numero_semana;

    printf("Dime un numero correspondiente al dia de la semana: ");
    scanf("%i",&numero_semana);
    fflush(stdin);

    if (numero_semana == 1){
        printf("Es Lunes");
    }else if (numero_semana == 2){
        printf("Es Martes");
    }else if (numero_semana == 3){
        printf("Es Miercoles");
    }else if (numero_semana == 4){
        printf("Es Jueves");
    }else if (numero_semana == 5){
        printf("Es Viernes");
    }else if (numero_semana == 6){
        printf("Es Sabado");
    }else if (numero_semana == 7){
        printf("Es Domingo");
    }else{
        printf("No corresponde a ningun dia...\n");
    }
}