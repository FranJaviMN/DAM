#include <stdio.h>

void main (){

    int num_empleados;
    int sueldo;
    int num_veces = 1;
    int total_sueldo = 0;
    int sueldo_menor = 0;
    int sueldo_mayor = 0;

    printf("¿Cuantos empleados tiene la empresa?:" );
    scanf("\n%i",&num_empleados);
    fflush(stdin);

    printf("Dime el sueldo del empleado numero %i: ",num_veces);
    scanf("\n%i",&sueldo);
    fflush(stdin);
    num_veces = num_veces+1;
    total_sueldo = total_sueldo+sueldo;

    if (sueldo > 1300){
        sueldo_mayor = sueldo_mayor+1;
    }else{
        sueldo_menor = sueldo_menor+1;
    }

    while (num_veces <= num_empleados){
        printf("Dime el sueldo del empleado numero %i: ",num_veces);
        scanf("\n%i",&sueldo);
        fflush(stdin);
        num_veces = num_veces+1;
        total_sueldo = total_sueldo+sueldo;

        if (sueldo > 1300){
            sueldo_mayor = sueldo_mayor+1;
        }else{
            sueldo_menor = sueldo_menor+1;
    }
    }

    printf("La empresa gasta en sueldos %i\n",total_sueldo);
    printf("En la empresa hay %i que cobran mas de 1300 y %i que cobran menos de 1300\n",sueldo_mayor,sueldo_menor);

}