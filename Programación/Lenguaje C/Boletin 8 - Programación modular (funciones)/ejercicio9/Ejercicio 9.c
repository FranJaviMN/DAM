#include <stdio.h>

// Creamos una funcion donde vamos a sumar los numeradores

int suma_de_numeradores (int numerador_1, int numerador_2){

    int suma_numeradores;

    suma_numeradores = numerador_1 + numerador_2;

    return suma_numeradores;

}


// Otra funcion para sumar los denominadores o hacerle el maximo comun divisor

int maximo_comun_divisor (int denominador_1, int denominador_2){

    int MaxComunDivisor;

    if (denominador_1 != denominador_2){

        MaxComunDivisor = denominador_1 * denominador_2;

        return MaxComunDivisor;

    }else{
        MaxComunDivisor = denominador_1;
    }

}

// Calculo de la reducción

int calculo_reducción(int numerador_sumado, int denominador_sumado){

    int numerador_reducido;
    int denominador_reducido;

    while (numerador_sumado%2 == 0 && denominador_sumado%2 == 0){
        numerador_reducido = numerador_sumado/2;
        denominador_reducido = denominador_sumado/2;
    }

    printf("La fraccion reducida es de %i / %i",numerador_reducido, denominador_reducido);
}


// Funcion principal del programa
void main (){

    // Definimos las variables que necesitamos

    int denominador_1;
    int denominador_2;
    int numerador_1;
    int numerador_2;
    int suma_denominador;
    int suma_numerador;
    int numerador_reducido;
    int denominador_reducido;

    // Pedimos por pantalla las numeradores y denominadores

    printf("------Fraccion numero 1------\n");
    printf("Introduzca el numerador: ");
    scanf("\n%i",&numerador_1);
    fflush(stdin);

    printf("Introduzca el denominador: ");
    scanf("\n%i",&denominador_1);
    fflush(stdin);

    printf("------Fraccion numero 2------\n");
    printf("Introduzca el numerador: ");
    scanf("\n%i",&numerador_2);
    fflush(stdin);

    printf("Introduzca el denominador: ");
    scanf("\n%i",&denominador_2);
    fflush(stdin);

    // Llamamos a las funciones que hemos creado para sumar ambas fracciones

    suma_numerador = suma_de_numeradores(numerador_1, numerador_2);
    suma_denominador = maximo_comun_divisor(denominador_1, denominador_2);

    printf("La suma de ambas fracciones es de %i / %i\n",suma_numerador, suma_denominador);

//  calculo_reducción(suma_numerador, suma_denominador);


}