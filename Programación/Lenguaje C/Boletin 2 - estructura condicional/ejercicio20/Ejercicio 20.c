#include <stdio.h>

void main(){

    int hora;

    printf("Dime la hora a la que estas: ");
    scanf("%i",&hora);
    fflush(stdin);

    if (hora >=6 || hora <=12){
        printf("Buenos dias\n");
    }else if (hora >=13 || hora <=20){
        printf("Buenas tardes\n");
    }else if (hora >=21 || hora <=5){
        printf("Buenas noches\n");
    }else{
        printf("No es ningun tramo horario\n");
    }
}