#include <stdio.h>

int calculo_suma_naturales(int numero){

    int cont_numero;
    int suma_naturales = 0;

    for (cont_numero=1;cont_numero<=numero;cont_numero++){
        suma_naturales = suma_naturales+cont_numero;
    } 

    return suma_naturales;

}

int calculo_numero_factorial(int numero){
    int cont_numero;
    int suma_naturales = 1;

    for (cont_numero=1;cont_numero<=numero;cont_numero++){
        suma_naturales = suma_naturales * cont_numero;
    }

    return suma_naturales;
}

float suma_inversos(int numero){

    int cont_numero;
    float suma_inversos;

    for (cont_numero=1;cont_numero<=numero;cont_numero++){
        suma_inversos = suma_inversos + (1/cont_numero);
    }

    return suma_inversos;

}


void main (){

    int opcion;
    int numero;
    int resultado_opcion;
    float resultado_inversos;

    printf("Escoge la opcion que necesites: ");
    printf("\n");
    printf("1) Suma de números naturales\n");
    printf("2) Factorial\n");
    printf("3) Suma de los inversos\n");
    printf("4) Fin\n");
    scanf("\n%i",&opcion);
    fflush(stdin);

    while (opcion < 1 | opcion > 4){
        printf("La opcion escogida no es valida, vuelve a intentarlo: ");
        printf("\n");
        printf("1) Suma de números naturales\n");
        printf("2) Factorial\n");
        printf("3) Suma de los inversos\n");
        printf("4) Fin\n");
        scanf("\n%i",&opcion);
        fflush(stdin);
    }

    if (opcion == 4){
        printf("SE TERMINA EL PROGRAMA, ADIOS");
    }else{
        printf("Dime un numero cualquiera para realizar la accion elegida:\n ");
        scanf("\n%i",&numero);
        fflush(stdin);
    }

    if (opcion == 1){
        resultado_opcion = calculo_suma_naturales(numero);

        printf("La suma de numero naturales de %i es de %i\n",numero,resultado_opcion);
    }else if (opcion == 2){
        resultado_opcion = calculo_numero_factorial(numero);

        printf("La operacion de numeros naturales de %i es de %i\n",numero,resultado_opcion);
    }else{
        resultado_inversos = suma_inversos(numero);

        printf("El resultado de la suma de los inversos de %i es de %.2f",numero,resultado_inversos);


    }

    

}