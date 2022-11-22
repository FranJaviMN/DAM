//Realizar un programa que cargue una matriz de enteros 4 x 4 aleatoriamente, e intercambie las filas por las
//columnas.

#include <stdio.h>
#include <stdlib.h>

void rellenar_aleatorio(int matriz[4][4]){

    int cont_filas = 0;
    int cont_columnas = 0;

    for (cont_filas = 0;cont_filas < 4 ;cont_filas++){
        for(cont_columnas=0;cont_columnas < 4;cont_columnas++){
            matriz[cont_filas][cont_columnas] = rand() % 10;
        }
    }
}

void mostrar_matriz(int matriz[4][4]){
    int cont_filas = 0;
    int cont_columnas = 0;

    for (cont_filas = 0;cont_filas < 4 ;cont_filas++){
        printf("\n");
        for(cont_columnas=0;cont_columnas < 4;cont_columnas++){
            printf("    %i  ",matriz[cont_filas][cont_columnas]);
        }
    }
    printf("\n");
}

void mostrar_inversa_matriz(int matriz[4][4]){
    int cont_filas = 0;
    int cont_columnas = 0;

    for (cont_filas = 0;cont_filas < 4 ;cont_filas++){
        printf("\n");
        for(cont_columnas=0;cont_columnas < 4;cont_columnas++){
            printf("    %i  ",matriz[cont_columnas][cont_filas]);
        }
    }


}



void main(){

    int matriz[4][4];
    rellenar_aleatorio(matriz);
    mostrar_matriz(matriz);
    mostrar_inversa_matriz(matriz);
}