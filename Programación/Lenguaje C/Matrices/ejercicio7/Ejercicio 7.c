//Realizar un programa que lea las calificaciones obtenidas por un grupo de 12 alumnos en cuatro asignaturas y
//saque por pantalla lo siguiente:
//a. Número de alumnos con 4 asignaturas suspensas, con 3, con 2, con 1 y con 0.
//b. Nota media de cada una de las asignaturas.
//c. Listado de la notas medias con el número de alumno y su nota media ordenado de menor a mayor.

#include <stdio.h>

void rellenar_aleatorio(int matriz[12][4]){

    int cont_filas = 0;
    int cont_columnas = 0;

    for (cont_filas = 0;cont_filas < 12 ;cont_filas++){
        printf("\n");
        printf("Alumno %i: ",cont_filas+1);
        for(cont_columnas=0;cont_columnas < 4;cont_columnas++){
            matriz[cont_filas][cont_columnas] = rand() % 10;
            printf("    %i  ",matriz[cont_filas][cont_columnas]);
        }
    }
}

void mostrar_media_alumnos(int matriz[12][4]){

    int cont_filas = 0;
    int cont_columnas = 0;
    int media_cada_alumno = 0;

    for (cont_filas = 0;cont_filas < 12 ;cont_filas++){
        printf("\n");
        for(cont_columnas=0;cont_columnas < 4;cont_columnas++){
            media_cada_alumno = (media_cada_alumno + matriz[cont_columnas][cont_filas])/4;
        }
        printf("La media del alumno %i es: %i",cont_filas,media_cada_alumno);
        
    }
}




void main(){

    int matriz[12][4];
    rellenar_aleatorio(matriz);
    mostrar_media_alumnos(matriz);
}