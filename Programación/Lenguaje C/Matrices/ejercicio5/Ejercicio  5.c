//Realiza un programa que genere una matriz 4x3 de números aleatorios de 0 a 99 , la imprima y realice los
//siguientes calculos:
//• La media de los valores pares de la matriz
//• Los valores máximo de cada fila
//• Los valores mínimos de cada columna.

#include <stdio.h>
#include <stdlib.h>

void rellenar_aleatorio(int matriz[4][3]){

    int cont_filas = 0;
    int cont_columnas = 0;

    for (cont_filas = 0;cont_filas < 4 ;cont_filas++){
        for(cont_columnas=0;cont_columnas < 3;cont_columnas++){
            matriz[cont_filas][cont_columnas] = rand() % 100;
        }
    }
}

void mostrar_matriz(int matriz[4][3]){
    int cont_filas = 0;
    int cont_columnas = 0;

    for (cont_filas = 0;cont_filas < 4 ;cont_filas++){
        printf("\n");
        for(cont_columnas=0;cont_columnas < 3;cont_columnas++){
            printf("    %i  ",matriz[cont_filas][cont_columnas]);
        }
    }
    printf("\n");
}

void calcular_media_raiz(int matriz[4][3]){
    int cont_filas = 0;
    int cont_columnas = 0;
    int suma_numeros_matriz = 0;
    int media_matriz = 0;

    for (cont_filas = 0;cont_filas < 4 ;cont_filas++){
        for(cont_columnas=0;cont_columnas < 3;cont_columnas++){
            suma_numeros_matriz = suma_numeros_matriz + matriz[cont_filas][cont_columnas];
        }
    }

    media_matriz = suma_numeros_matriz / 12;

    printf("La media de la matriz es de %i\n",media_matriz);
}

    

void maximo_fila(int matriz[4][3]){
    int cont_filas = 0;
    int cont_columnas = 0;
    int maximo_fila = 0;

    printf("Los maximos de cada fila son: ");

    for (cont_filas = 0;cont_filas < 4 ;cont_filas++){
        for(cont_columnas=0;cont_columnas < 3;cont_columnas++){
            if (maximo_fila < matriz[cont_filas][cont_columnas]){
                maximo_fila = matriz[cont_filas][cont_columnas];
            }
        }
        printf("%i  ",maximo_fila);
        maximo_fila = 0;
    }

}






void main(){

    int matriz[4][3];
    rellenar_aleatorio(matriz);
    mostrar_matriz(matriz);
    calcular_media_raiz(matriz);
    maximo_fila(matriz);
}