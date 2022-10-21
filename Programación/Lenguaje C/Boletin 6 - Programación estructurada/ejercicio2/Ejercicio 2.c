#include <stdio.h>

void main (){

    int nota_alumno;

    printf("Dime la nota del alumno: ");
    scanf("\n%i",&nota_alumno);
    fflush(stdin);

    while (nota_alumno < 0 | nota_alumno > 10){
        printf("Valor lo valido, vuelve a introducirlo: ");
        scanf("\n%i",&nota_alumno);
        fflush(stdin);
    }

    if (nota_alumno <= 3){
        printf("Muy Deficiente");
    }else if(nota_alumno > 3 && nota_alumno <= 5){
        printf("Insuficiente");
    }else if(nota_alumno > 5 && nota_alumno <= 6){
        printf("Suficiente");
    }else if(nota_alumno > 6 && nota_alumno <= 7){
        printf("Bien");
    }else if (nota_alumno > 7 && nota_alumno <= 9){
        printf("Notable");
    }else if (nota_alumno > 9 && nota_alumno == 10){
        if (nota_alumno == 10){
            printf("¡MATRÍCULA DE HONOR!");
        }else{
            printf("SOBREALIENTE");
        }

    }
}