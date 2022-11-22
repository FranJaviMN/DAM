//Escribe un programa que genere al azar 20 números enteros comprendidos entre 0 y 9. Estos números se
//deben introducir en un array de 4 filas por 5 columnas.
//El programa mostrará las sumas parciales de filas y columnas igual que si de una hoja de cálculo se tratara.
//La suma total debe aparecer en la esquina inferior derecha.

#include <stdio.h>
#include <stdlib.h>


void rellenar_aleatorio(int matriz[4][5]){

    int cont_filas = 0;
    int cont_columnas = 0;

    for (cont_filas = 0;cont_filas < 4 ;cont_filas++){
        for(cont_columnas=0;cont_columnas < 5;cont_columnas++){
            matriz[cont_filas][cont_columnas] = rand() % 10;
        }
    }
}

void suma_y_mostrar_fila(int matriz[4][5]){
    int cont_filas = 0;
    int cont_columnas = 0;
    int suma_filas = 0;
    int suma_columna = 0;

    for (cont_filas = 0;cont_filas < 4 ;cont_filas++){
        printf("\n");
        for(cont_columnas=0;cont_columnas < 5;cont_columnas++){
            printf("    %i  ",matriz[cont_filas][cont_columnas]);
            suma_filas = suma_filas + matriz[cont_filas][cont_columnas];
        }
    printf("Suma: %i",suma_filas);
    }
}




void main(){

    int matriz[4][5];
    rellenar_aleatorio(matriz);
    suma_y_mostrar_fila(matriz);





}