#include <stdio.h>


// Funcion que vamos a usar para saber si un numero es primo o no, es primo cuando puede ser dividido
// Entre el mismo y entre 1
int saber_primo(int numero){

    int numero_division_primo;
    int numero_divisores = 0;
    int primo = 1;

    //Bucle for donde vamos a comprobar si ese numero es primo.
    for (numero_division_primo = 1;numero_division_primo<=numero;numero_division_primo++){
        if (numero%numero_division_primo == 0){
            numero_divisores++;
        }
    }

    // Condicion donde, si es primo tiene dos divisores y si no lo es, devolvemos 0
    if (numero_divisores == 2){
        return primo;
    }else{
        return 0;
    }

}


// Funcion principal donde vamos a preguntar el rango de numero para saber cuantos primos hay en ese
// Rango
void main (){

    int numero_principio;
    int numero_final;
    int numero_del_rango;
    int numero_de_primos = 0;

    printf("Dime el rango de numeros que quieres comprobar: ");
    scanf("\n%i",&numero_principio);
    fflush(stdin);

    scanf("\n%i",&numero_final);
    fflush(stdin);

    // Mediante el bucle for vamos recorriendo el rango de numeros dado llamando a la funcion "saber_primo"
    //Para cada uno de ellos e ir aumentando una variable para saber cuantos numeros primos hay.
    for (numero_del_rango = numero_principio;numero_del_rango<=numero_final;numero_del_rango++){
        if (saber_primo(numero_del_rango) == 1){
            numero_de_primos++;
        }else{
            numero_de_primos = numero_de_primos;
        }
    }

    printf("En el rango de %i hasta %i hay %i numeros primos.",numero_principio,numero_final,numero_de_primos);

}

