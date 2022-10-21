#include <stdio.h>

int es_perfecto(int numero){

    int cont_divisores;
    int divisores;
    int suma_divisores = 0;
    int comprueba_perfecto = 0;

    for (cont_divisores=1;cont_divisores<numero;cont_divisores++){
        divisores=numero%cont_divisores;
        if (divisores == 0){
            suma_divisores = suma_divisores+cont_divisores;
        }
    }

    if (suma_divisores == numero){
        comprueba_perfecto = 1;
        return comprueba_perfecto;
    }else{
        return comprueba_perfecto;
    }

}

int leer_numero(){

    int cantidad_numeros;
    int num_numeros;
    int numero;
    char resultado;

    printf("Dime cuantos numeros vas a introducir: ");
    scanf("\n%i",&cantidad_numeros);
    fflush(stdin);

    for (num_numeros=1;num_numeros<=cantidad_numeros;num_numeros++){
        printf("Dime el numero que quieras: ");
        scanf("\n%i",&numero);
        fflush(stdin);
        if (es_perfecto(numero) == 1){
            printf("El numero %i es perfecto\n",numero);
        }else{
            printf("El numero %i no es perfecto\n",numero);
        }
    }


}

void main (){

    leer_numero();

}