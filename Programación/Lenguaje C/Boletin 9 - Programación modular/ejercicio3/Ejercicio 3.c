#include <stdio.h>

int escribir_Tabla_Multiplicar(int numero_a_multiplicar){

    int cont_numero;
    int multiplicacion;

    for (cont_numero=1;cont_numero<=10;cont_numero++){
        multiplicacion = cont_numero*numero_a_multiplicar;
        printf("%i x %i = %i\n",numero_a_multiplicar,cont_numero,multiplicacion);
    }
}

void main(){

    int numero;

    printf("Dime el numero del que quieres saber la tabla de miltiplicar: ");
    scanf("\n%i",&numero);
    fflush(stdin);

    escribir_Tabla_Multiplicar(numero);
}