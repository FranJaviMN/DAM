#include <stdio.h>

// El siguiente programa se trata de la forma de comprobar si un numero es primo y mostrarnos todos los numeros primos que hay entre ese numero y 2



// Funcion donde vamos a leer el numero entero que necesitamos para el primo, si este es menor que 2, se vuelve a pedir el numero.

int leer_numero(){

    // Variable donde vamos a guardar el numero.
    int num_entero;

    // Pedimos el numero por pantalla
    printf("Dime un numero entero que sea mayor que 2: ");
    scanf("\n%i",&num_entero);
    fflush(stdin);

    //Bucle while para comprobar que el numero es mayor que 2, si no lo fuera se muestra mensaje de error y se vuelve a pedir el numero.
    while (num_entero <=2){
        printf("El entero debe de ser mayor que 2: ");
        scanf("\n%i",&num_entero);
        fflush(stdin);
    }

    // Devolvemos el numero entero.
    return num_entero;
    

}


// Funcion donde vamos a comprobar si el numero es primo, para ello se debe de saber que si es primo debe de tener solo 2 divisores, entre 1 y el mismo.
int esPrimo(int entero){

    // Declaramos las variables que necesitamos, como son el numero de divisres que tiene el numero, cuenta de numeros hasta el que queremos comprobar y una variable
    // para saber si es primo(1) o no lo es(0).
    int numero_divisores = 0;
    int numero_division_primo;
    int primo = 1;

    // Comprobamos el rango de numero desde 1 hasta el numero en si, para ver cuantos divisores tiene.
    for (numero_division_primo=1;numero_division_primo<=entero;numero_division_primo++){
        if (entero%numero_division_primo == 0){
            numero_divisores++;
        }
    }

    // Si el numero de divisores es 2 significara que es primo, mientras que si no es 2, no lo es.
    if (numero_divisores == 2){

        // Devolvemos 1 si es primo
        return primo;
    }else{
        // Devolvemos 0 si no lo es
        return 0;
    }

}

// Funcion para mostrar todos los primos desde el numero que hemos pedido hasta el 2
void imprime_primos(int entero){

    // Incluimos una variable para el bucle.
    int cont_numero;

    // Declaramos que la variable es igual al numero entero, para poder hacerlo de forma inversa.
    cont_numero = entero;

    // Mostramos un mensaje en funcion de si el numero introducido es primo o no.
    if (esPrimo(entero) == 1){
        printf("------ El numero %i es primo ------\n",entero);
    }else{
        printf("------ El numero %i no es primo ------\n",entero);
    }

    // Bucle for donde vamos a ir mostrando todos los numeros comprendidos entre el numero introducido y 2 que sean primos.
    for (cont_numero;cont_numero >= 2;cont_numero--){
        if (esPrimo(cont_numero) == 1){
            printf(" %i |",cont_numero);
        }
    }
    printf(" \n");
}

//Funcion principal donde vamos a ir a llamando a las funciones anteriores.

void main(){


    // Guardamos el numero entero en esta variable.
    int numero_entero;

    // Guardamos en nuestra variable el numero que metemos por pantalla
    numero_entero = leer_numero();

    // Llamamos a la funcion para poder mostrar todos lo primos que haya entre el entero y 2
    imprime_primos(numero_entero);


}