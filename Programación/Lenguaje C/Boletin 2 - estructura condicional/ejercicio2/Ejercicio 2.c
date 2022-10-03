#include <stdio.h>
#include <string.h>
#define sueldo_hora 50

void main(){

    char nombre_empleado;
    int horas_trabajadas;

    int salario_bruto;
    float total_pagar;

    printf("Digame el nombre del empleado: ");
    scanf("%s",&nombre_empleado);
    fflush(stdin);

    printf("Digame el numero de horas trabajadas, que sea exacto: ");
    scanf("%i",&horas_trabajadas);
    fflush(stdin);

    salario_bruto = horas_trabajadas*sueldo_hora;

    if (salario_bruto > 2400){
        total_pagar = salario_bruto-84;
        printf("El sueldo que recibe %s es de %f",nombre_empleado, total_pagar);
    } else{
        total_pagar = salario_bruto-salario_bruto*0.035;
        printf("El sueldo que recibe %s es de %f",nombre_empleado, total_pagar);
    }



}