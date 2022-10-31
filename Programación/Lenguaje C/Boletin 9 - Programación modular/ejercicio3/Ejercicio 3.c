#include <stdio.h>


// Funcion donde vamos a generar la tabla de multiplicar que necesitamos.

int escribir_Tabla_Multiplicar(int numero_a_multiplicar){

    // Dos variables para poder sacar la tabla de multiplicar
    int cont_numero;
    int multiplicacion;

    // Bucle for para poder ir recorriendo desde el 1 hasta el 10 e ir multiplandolo por el numero que nosotros le hemos dado.
    for (cont_numero=1;cont_numero<=10;cont_numero++){
        multiplicacion = cont_numero*numero_a_multiplicar;
        // Mostramos el resultado por pantalla.
        printf("%i x %i = %i\n",numero_a_multiplicar,cont_numero,multiplicacion);
    }
}

void main(){

    // Variable donde pedimos el numero
    int numero;

    // Pedimos por pantalla el numero a multiplicar
    printf("Dime el numero del que quieres saber la tabla de miltiplicar: ");
    scanf("\n%i",&numero);
    fflush(stdin);

    // Llamamos a la funcion
    escribir_Tabla_Multiplicar(numero);
}