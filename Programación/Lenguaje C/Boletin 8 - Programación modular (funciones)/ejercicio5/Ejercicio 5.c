#include <stdio.h>


// Creamos la funcion donde vamos a realizar la ecuacion con los factoriales que nos indique el usuario.
int hacer_factorial(int numero){


    // Indicamos las variables que necesitamos
    int valor_total = 1;
    int cont_numero;
    int suma_ecuacion;
    int division_factoriales;


    // Creamos un for para recorrer los numeros hasta el que hemos introducido
    for (cont_numero=1;cont_numero<=numero;cont_numero++){
        // Calculamos el valor de cada factorial de numero
        valor_total = valor_total*cont_numero;
        // Realizamos la suma de todos los factoriales que recorremos
        suma_ecuacion = valor_total+suma_ecuacion;
    }

    // Creamos la division por el numero que hemos introducido
    division_factoriales = suma_ecuacion/numero;

    return division_factoriales;
}

void main(){

    int numero;
    int numero_factorial;

    // Pedimos el numero por pantalla
    printf("Dime el numero para hacer su factorial: ");
    scanf("\n%i",&numero);
    fflush(stdin);

    // Guardamos el resultado de la funcion en una variable.
    numero_factorial = hacer_factorial(numero);

    // Mostramos por pantalla el resultado.
    printf("El factorial del numero %i es %i\n",numero, numero_factorial);
}