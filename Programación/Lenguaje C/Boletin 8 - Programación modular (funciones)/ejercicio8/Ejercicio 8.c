#include <stdio.h>

// Variables globales que no van a cambiar
#define tarifa_horas_ordinarias 12
#define tarifa_horas_extra 1.5


// Funcion donde vamos a calcular los impuestos del sueldo bruto, si los tuviera

float calcula_impuestos(float sueldo_bruto){

    float sueldo_con_impuestos = 0;
    float total_impuestos = 0;

    // Condicion donde vemos que, si es mas de 200 o 200, le aplicamos impuestos, si no, no se le aplica

    if (sueldo_bruto >= 200){
        sueldo_con_impuestos = sueldo_bruto - 200;
        if (sueldo_con_impuestos >= 300){
            total_impuestos = 300 * 0.25;
            sueldo_con_impuestos = sueldo_con_impuestos - 300;
            total_impuestos = total_impuestos + sueldo_con_impuestos * 0.45;
            return total_impuestos;
        }
    }else{
        return total_impuestos;
    }


}

// Funcion para calcular el salario bruto segun las horas

float calcula_salario_horas (int horas_totales){

    float salario_horas_normales;
    float salario_horas_extras;
    float sueldo_bruto;
    int horas_extras;

    // Comprobamos que, si ha hecho horas extra se le aplique el bonus

    if (horas_totales > 38){

        horas_extras = horas_totales - 38;
        
        salario_horas_normales = 38 * tarifa_horas_ordinarias;
        salario_horas_extras = horas_extras * tarifa_horas_extra;

        sueldo_bruto = salario_horas_extras + salario_horas_normales;

        return sueldo_bruto;
    }else{
        sueldo_bruto = horas_totales * tarifa_horas_ordinarias;

        return sueldo_bruto;
    }


}

// Funcion principal del programa

void main (){

    // Funciones que vamos a necesitar
    float sueldo;
    float impuestos;
    int cod_empleado;
    int num_horas;
    float salario_bruto;
    float sueldo_neto;
    int repeticion;

    //Pedimos por pantalla el id del trabajador y sus horas totales

    printf("Introduzca el código del empleado: ");
    scanf("\n%i",&cod_empleado);
    fflush(stdin);

    printf("Introduzca el número de horas: ");
    scanf("\n%i",&num_horas);
    fflush(stdin);

    //Llamamos a las funciones para calcular salario bruto, neto e impuestos

    salario_bruto = calcula_salario_horas(num_horas);
    impuestos = calcula_impuestos(salario_bruto);
    sueldo_neto = salario_bruto - impuestos;

    // Mostramos por pantalla

    printf("El salario bruto del empleado %i es de: %.2f\n",cod_empleado,salario_bruto);
    printf("Los impuestos a pagar son de %.2f\n",impuestos);
    printf("El sueldo neto del empleado es de %.2f\n",sueldo_neto);

    // Preguntamos al usuario si quieres realizar otro calculo

    printf("¿Desea repetir la operacion?(1 = SI, 2 = No): ");
    scanf("\n%i",&repeticion);
    fflush(stdin);

    // Si el usuario dice si, entramos en el bucle y volvera a pedirnos horas e id del usuario, asi hasta
    //que deseemos terminar.

    while (repeticion == 1){
        printf("Introduzca el código del empleado: ");
        scanf("\n%i",&cod_empleado);
        fflush(stdin);

        printf("Introduzca el número de horas: ");
        scanf("\n%i",&num_horas);
        fflush(stdin);

        salario_bruto = calcula_salario_horas(num_horas);
        impuestos = calcula_impuestos(salario_bruto);
        sueldo_neto = salario_bruto - impuestos;

        printf("El salario bruto del empleado %i es de: %.2f\n",cod_empleado,salario_bruto);
        printf("Los impuestos a pagar son de %.2f\n",impuestos);
        printf("El sueldo neto del empleado es de %.2f\n",sueldo_neto);

        printf("¿Desea repetir la operacion?(1 = SI, 2 = No): ");
        scanf("\n%i",&repeticion);
        fflush(stdin);
    }
}