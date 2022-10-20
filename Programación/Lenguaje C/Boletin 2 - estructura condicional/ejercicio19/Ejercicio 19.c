#include <stdio.h>

void main (){

    char dia_de_semana;

    printf("Dime el dia de la semana(Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo): ");
    scanf("%c",&dia_de_semana);
    fflush(stdin);

    if (dia_de_semana == "Sabado" || dia_de_semana == "Domingo"){
        printf("Esos dias no hay clase...\n");
    }else if (dia_de_semana == "Lunes"){
        printf("Ese dia hay Programacion\n");
    }else if (dia_de_semana == "Martes"){
        printf("Ese dia hay Sistemas\n");
    }else if (dia_de_semana == "Miercoles"){
        printf("Ese dia hay Entornos\n");
    }else if (dia_de_semana == "Jueves"){
        printf("Ese dia hay BBDD\n");
    }else if (dia_de_semana == "Viernes"){
        printf("Ese dia hay Programacion\n");
    }else{
        printf("Ese dia de la semana no existe...\n");
    }
}