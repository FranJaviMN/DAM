#include <stdio.h>

int realizar_reintegro(float saldo_total){

    float dinero_reintegro;
    float saldo_restante;

    printf("Dime el dinero que quieres retirar(No puede ser mas de %.2f): ",saldo_total);
    scanf("\n%f",&dinero_reintegro);
    fflush(stdin);

    while (dinero_reintegro > saldo_total){
        printf("El dinero a retirar no puede ser mayor de %.2f: ",saldo_total);
        scanf("\n%f",&dinero_reintegro);
        fflush(stdin);
    }

    saldo_restante = saldo_total - dinero_reintegro;

    return saldo_restante;
}


float realizar_ingreso(float saldo_total){

    float dinero_ingreso;
    float saldo_restante;

    printf("Dime el dinero que quieres ingresar: ");
    scanf("\n%f",&dinero_ingreso);
    fflush(stdin);

    saldo_restante = saldo_total + dinero_ingreso;

    return saldo_restante;
}

void main(){

    float saldo_cuenta;
    float resto_saldo;
    float dinero_ingreso;
    int num_ingresos = 0;
    int num_reintegros = 0;
    int opcion;

    printf("Dime el sueldo que tienes en la cuenta: ");
    scanf("\n%f",&saldo_cuenta);
    fflush(stdin);
    resto_saldo = saldo_cuenta;

    printf("----------Elegir Opción----------\n");
    printf("1) Hacer reintegro\n");
    printf("2) Hacer Ingreso\n");
    printf("3) Consultar operaciones\n");
    printf("0) Salir del programa\n");

    printf("Dime la opcion que quieres consultar: ");
    scanf("\n%i",&opcion);
    fflush(stdin);

    if (opcion == 1){

        resto_saldo = realizar_reintegro(saldo_cuenta);
        num_reintegros = num_reintegros + 1;

        printf("Acción realizada.\n");
    
    }else if (opcion == 2){

        resto_saldo = realizar_ingreso(saldo_cuenta);

        printf("Accion realizada");
        num_ingresos = num_ingresos +1;

    }else if (opcion == 3){

        printf("Se han realizado %i de reintegros y %i numero de ingresos.\n",num_reintegros,num_ingresos);
        printf("En la cuenta quedan %.2f\n",saldo_cuenta);

    }

    while (opcion != 0){

        printf("----------Elegir Opción----------\n");
        printf("1) Hacer reintegro\n");
        printf("2) Hacer Ingreso\n");
        printf("3) Consultar operaciones\n");
        printf("0) Salir del programa\n");

        printf("Dime la opcion que quieres consultar: ");
        scanf("\n%i",&opcion);
        fflush(stdin);
        if (opcion == 1){

        resto_saldo = realizar_reintegro(resto_saldo);
        num_reintegros = num_reintegros + 1;

        printf("Acción realizada.\n");
    
        }else if (opcion == 2){

        resto_saldo = realizar_ingreso(resto_saldo);

        printf("Accion realizada");
        num_ingresos = num_ingresos +1;

        }else if (opcion == 3){

        printf("Se han realizado %i de reintegros y %i numero de ingresos.\n",num_reintegros,num_ingresos);
        printf("En la cuenta quedan %.2f\n",resto_saldo);

        }
    }

}