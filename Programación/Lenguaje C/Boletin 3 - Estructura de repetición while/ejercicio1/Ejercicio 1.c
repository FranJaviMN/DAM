#include <stdio.h>

void main(){

    int cont_notas = 1;
    float nota_alumno;
    int nota_aprobada = 0;
    int nota_suspensa = 0;


    printf("Dime la nota del alumno numero %i: ",cont_notas);
    scanf("\n%f",&nota_alumno);
    fflush(stdin);
    cont_notas = cont_notas+1;

    if (nota_alumno < 7){
        nota_suspensa = nota_suspensa+1;
    }else{
        nota_aprobada = nota_aprobada+1;
    }

    while (cont_notas <= 10){
        printf("Dime la nota del alumno numero %i: ",cont_notas);
        scanf("\n%f",&nota_alumno);
        fflush(stdin);
        cont_notas = cont_notas+1;

        if (nota_alumno < 7){
            nota_suspensa = nota_suspensa+1;
        }else{
            nota_aprobada = nota_aprobada+1;
        }
    }

    printf("nota suspensa: %i y la nota aprobada: %i",nota_suspensa, nota_aprobada);
}