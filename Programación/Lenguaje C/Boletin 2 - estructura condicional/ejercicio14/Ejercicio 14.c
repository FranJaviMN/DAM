#include <stdio.h>

void main(){

    int mes_fecha;
    int dia_fecha;
    int ano_fecha;

    printf("Dime el mes del añor: ");
    scanf("%i",&mes_fecha);
    fflush(stdin);

    printf("Dime el año de la fecha: ");
    scanf("%i",&ano_fecha);
    fflush(stdin);

    printf("Dime el dia del año: ");
    scanf("%i",&dia_fecha);
    fflush(stdin);

    if (dia_fecha == 25){
        if (mes_fecha == 12){
            printf("Es navidad!!!!\n");
        }
    }else{
        printf("No es navidad...\n");
    }

}