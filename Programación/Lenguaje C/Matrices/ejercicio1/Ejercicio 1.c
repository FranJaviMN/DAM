//La biblioteca de C no incluye una función que permita copiar un array en otro, excepto para los arrays de
//caracteres o cadenas de caracteres que sí incluye una. Por lo tanto, para copiar un array en otro tendremos
//que añadir a nuestro programa el código correspondiente.
//Realizar un programa que lea un array a de dos dimensiones, copie el array a en otro array c, y visualice eI
//array c por filas.

#include <stdio.h>

// FUncion para rellenar la matriz
void rellenar_matriz(int matriz[3][3]){

    //Declaramos lo contadores de la matriz
    int cont_filas = 0;
    int cont_columnas = 0;

    //Bucle for anidado para poder agregar valores a cada campo de la raiz
    for (cont_filas = 0;cont_filas < 3; cont_filas++){
        for (cont_columnas =0 ;cont_columnas < 3; cont_columnas++){
            printf("Valor de [%i][%i]: ",cont_filas, cont_columnas);
            scanf("\n%i",&matriz[cont_filas][cont_columnas]);
            fflush(stdin);
        }
    }

}

// Copiamos la raiz

void copia_matriz(int matriz[3][3]){

    //Declaramos la matriz copia y los contadores
    int matriz_copia[3][3];
    int cont_filas = 0;
    int cont_columnas = 0; 

    // Recorremos la matriz para copiar los valores a la matriz copia
    for (cont_filas = 0;cont_filas < 3; cont_filas++){
        for (cont_columnas =0 ;cont_columnas < 3; cont_columnas++){
            matriz_copia[cont_filas][cont_columnas] = matriz[cont_filas][cont_columnas];
        }
    }

    //Visualizamos el array copiado
    for (cont_filas = 0;cont_filas < 3; cont_filas++){
        printf("\n");
        for (cont_columnas =0 ;cont_columnas < 3; cont_columnas++){
            printf("    %i  ",matriz_copia[cont_filas][cont_columnas]);
        }
    }
    printf("\n");
}

//Funcion principal donde vamos a llamar a las funciones.
void main(){
    int matriz[3][3];

    rellenar_matriz(matriz);
    copia_matriz(matriz);


}

