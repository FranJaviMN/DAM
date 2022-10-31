#include <stdio.h>


// Funcion donde vamos a realizar el reintegro
int realizar_reintegro(float saldo_total){

    // Variables que necesitamos.
    float dinero_reintegro; 
    float saldo_restante;

    // Pedimos por pantalla el dindero a retirar
    printf("Dime el dinero que quieres retirar(No puede ser mas de %.2f): ",saldo_total);
    scanf("\n%f",&dinero_reintegro);
    fflush(stdin);

    // Si el dinero es mayor al saldo total se repite la pregunta
    while (dinero_reintegro > saldo_total){
        printf("El dinero a retirar no puede ser mayor de %.2f: ",saldo_total);
        scanf("\n%f",&dinero_reintegro);
        fflush(stdin);
    }

    // Calculamos el salsdo restante
    saldo_restante = saldo_total - dinero_reintegro;

    // Devolvemos el saldo restante
    return saldo_restante;
}

// Funcion para realizar un ingreso
float realizar_ingreso(float saldo_total){

    // Variable que necesitamos para esta funcion.
    float dinero_ingreso;
    float saldo_restante;

    // Pedimos por pantalla cuanto dinero quiere ingresar
    printf("Dime el dinero que quieres ingresar: ");
    scanf("\n%f",&dinero_ingreso);
    fflush(stdin);

    // Calculamos el saldo restante
    saldo_restante = saldo_total + dinero_ingreso;

    // Devolvempos el saldo restante

    return saldo_restante;  
}

void main(){

    // Variables que necesitamos
    float saldo_cuenta;
    float resto_saldo;
    float dinero_ingreso;
    int num_ingresos = 0;
    int num_reintegros = 0;
    int opcion;

    // Pedimos el sueldo de la cuenta.
    printf("Dime el sueldo que tienes en la cuenta: ");
    scanf("\n%f",&saldo_cuenta);
    fflush(stdin);
    resto_saldo = saldo_cuenta;

    // Mostramos menu donde se ven las opciones
    printf("----------Elegir Opción----------\n");
    printf("1) Hacer reintegro\n");
    printf("2) Hacer Ingreso\n");
    printf("3) Consultar operaciones\n");
    printf("0) Salir del programa\n");

    // Preguntamos por la opcion que necesita
    printf("Dime la opcion que quieres consultar: ");
    scanf("\n%i",&opcion);
    fflush(stdin);

    // Condicionales if para cada opcion que tenemos, en este caso 4
    if (opcion == 1){

        // Llamamos a la funcion de realizar ingreso.
        resto_saldo = realizar_reintegro(saldo_cuenta);
        // Agregamos contador para contar el numero de ingresos que se han hecho
        num_reintegros = num_reintegros + 1;

        // Mensaje de tarea cumplida
        printf("Acción realizada.\n");
    
    }else if (opcion == 2){

        // Llamamos a la funcion de realizar ingreso
        resto_saldo = realizar_ingreso(saldo_cuenta);
        // Mostramos mensaje de accion realizada
        printf("Accion realizada");
        // Agregamos contador para contar el numero de ingresos.
        num_ingresos = num_ingresos +1;

    }else if (opcion == 3){
        // Mostramos por pantalla la informacion de, saldo total, numero de ingresos y reintegros

        printf("Se han realizado %i de reintegros y %i numero de ingresos.\n",num_reintegros,num_ingresos);
        printf("En la cuenta quedan %.2f\n",saldo_cuenta);

    }
    // Bucle while para que se repita todas las veces que el usuario quiera, hasta que este pulse 0
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