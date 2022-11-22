//Realizar una función que dada una matriz de enteros 4 x 4 y un número devuelva la fila y columna en la que
//se encuentra este número y si el número no está en la matriz devuelva ambos valores a 0 e imprime el
//mensaje de que no se encuentra en la matriz.

#include <stdio.h>


// Funcion para rellenar la matriz
void rellenar_matriz(int matriz[4][4]){

    //Declaramos lo contadores de la matriz
    int cont_filas = 0;
    int cont_columnas = 0;

    //Bucle for anidado para poder agregar valores a cada campo de la raiz
    for (cont_filas = 0;cont_filas < 4; cont_filas++){
        for (cont_columnas =0 ;cont_columnas < 4; cont_columnas++){
            printf("Valor de [%i][%i]: ",cont_filas, cont_columnas);
            scanf("\n%i",&matriz[cont_filas][cont_columnas]);
            fflush(stdin);
        }
    }

}

int recorrer_matriz(int matriz[4][4]){

    int cont_filas = 0;
    int cont_columnas = 0;
    int numero_a_buscar;

    

    for (cont_filas = 0;cont_filas < 4; cont_filas++){
        printf("\n");
        for (cont_columnas =0 ;cont_columnas < 4; cont_columnas++){
            printf("    %i  ",matriz[cont_filas][cont_columnas]);
        }
    }
    printf("\n");
    printf("Dime el valor que quieres buscar: ");
    scanf("\n%i",&numero_a_buscar);
    fflush(stdin);

    for (cont_filas = 0;cont_filas < 4; cont_filas++){
        printf("\n");
        for (cont_columnas = 0 ;cont_columnas < 4; cont_columnas++){
            if (matriz[cont_filas][cont_columnas] == numero_a_buscar){
                printf("Se ha encontrado el numero %i en la posicion de la matriz [%i][%i]\n",numero_a_buscar,cont_filas,cont_columnas);
                return 1;
                break;
            }
        }
    }

    return 0;
}


void main(){

    int matriz_4x4[4][4];
    int tiene_valores;

    rellenar_matriz(matriz_4x4);
    tiene_valores = recorrer_matriz(matriz_4x4);

    if (tiene_valores == 0){
        printf("No se ha encontrado en la matriz ese numero.\n");
    }


}