// Incluimos la libreria de entrada y salida.

#include <stdio.h>

//Indicamos la funcion principal main

void main(){

    //Declaramos la variable que necesitamos

    int valor_numero;
    
    //Indicamos que se introduzca un numero cualquiera

    printf("Indica un numero que quieras mostrar: ");
    printf("\n");
    scanf("%d",&valor_numero);
    fflush(stdin);

    //Mostramos por pantalla el valor que ha introducido

    printf("\n");
    printf("El valor del numero es %d",valor_numero);
    printf("\n");
}