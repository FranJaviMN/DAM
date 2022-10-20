#include <stdio.h> 

void main(){

    //Declaramos las dos variables que necesitamos
    
    char minuscula;
    char mayuscula;

    //Pedimos por pantalla los datos necesarios

    printf("Digame la letra minuscula: ");
    printf("\n");

    scanf("%c",&minuscula);
    fflush(stdin);

    //Calculamos la letra mayuscula en codigo ASCI

    mayuscula = minuscula-32;

  
    printf("%c\n",mayuscula);

}