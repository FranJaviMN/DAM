
// Cargamos las librerias que necesitamos, en este caso entrada salida y de manejo de cadenas.
#include <stdio.h>
#include <string.h>


// Funcion donde vamos a sacar la primera letra de la palabra que nos den por teclado en main
char sacar_primera_letra(char palabra[]){

    // Variable para la primera letra.
    char primera_letra;

    // Sacamos la primera letra.
    primera_letra = palabra[0];

    // Devolvemos la letra.
    return primera_letra;

}

// Funcion principal donde vamos a pedir por pantalla la palabra para sacar su primera letra.
void main(){


    // Variable donde vamos a meter la palabra que vamos a pedir por pantalla.
    char palabra[200];
    // Variable donde vamos a guardar la primera letra.
    char primera_letra;

    // Preguntamos por pantalla la palabra que necesitamos.
    printf("Dime la palbra que quieras obtener la primera letra: ");
    scanf("\n%c",&palabra);
    fflush(stdin);

    // Llamamos a la funcion de sacar la primera letra
    primera_letra = sacar_primera_letra(palabra);

    // Mostramos por pantalla.
    printf("La primera letra es %c.\n",primera_letra);


}