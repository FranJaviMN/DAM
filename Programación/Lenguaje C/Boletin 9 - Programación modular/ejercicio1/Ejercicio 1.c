#include <stdio.h>
#include <string.h>

char sacar_primera_letra(char palabra[]){

    char primera_letra;

    primera_letra = palabra[0];

    return primera_letra;

}

void main(){

    char palabra[200];
    char primera_letra;

    printf("Dime la palbra que quieras obtener la primera letra: ");
    scanf("\n%c",&palabra);
    fflush(stdin);

    primera_letra = sacar_primera_letra(palabra);

    printf("La primera letra es %c.\n",primera_letra);


}