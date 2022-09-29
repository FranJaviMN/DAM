#include <stdio.h> 

void main(){
    
    char minuscula;
    char mayuscula;

    printf("Digame la letra minuscula: ");
    printf("\n");

    scanf("%c",&minuscula);
    fflush(stdin);

    mayuscula = minuscula-32;

  
    printf("%c\n",mayuscula);

}