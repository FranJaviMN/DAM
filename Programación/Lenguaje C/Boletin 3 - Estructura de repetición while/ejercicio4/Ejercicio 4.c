#include <stdio.h>

void main(){

    int serie = 11;
    int cont_veces = 1;

    printf("%i\n",serie);
    cont_veces = cont_veces + 1;
    serie = serie + 11;



    while (cont_veces <= 25){
        printf("%i\n",serie);
        cont_veces = cont_veces + 1;
        serie = serie + 11;
    }


}