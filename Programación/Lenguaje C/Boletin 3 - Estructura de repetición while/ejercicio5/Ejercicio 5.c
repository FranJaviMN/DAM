#include <stdio.h>

void main (){

    int multiplo = 8;

    printf("%i\n",multiplo);
    multiplo = multiplo + 8;

    while (multiplo <= 500){
        printf("%i\n",multiplo);
        multiplo = multiplo + 8;
    }
}