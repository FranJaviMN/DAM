//Define un array de números enteros de 3 filas por 6 columnas con nombre num y asigna los valores según la
//siguiente tabla. Muestra el contenido de todos los elementos del array dispuestos en forma de tabla

#include <stdio.h>

void mostrar_resultado(int matriz[3][6]){

    int cont_columnas = 0;
    int cont_filas = 0;

    for (cont_filas = 0;cont_filas <3 ;cont_filas++){
        printf("\n");
        for(cont_columnas=0;cont_columnas <6 ;cont_columnas++){
            printf("    %d  ",matriz[cont_filas][cont_columnas]);
        }
    }

}


void main(){

    int num[3][6];

    num[0][0] = 0; 
    num[0][1] = 30; 
    num[0][2] = 2; 
    num[0][5] = 5;
    num[1][0] = 75; 
    num[1][4] = 0;
    num[2][2] = -2; 
    num[2][3] = 9; 
    num[2][5] = 11;

    mostrar_resultado(num);

}