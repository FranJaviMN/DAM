#include <stdio.h>
#include <math.h>

float calcular_raiz(int numero, float indice){

    float calculo_raiz;
    float indice_fraccion;
    int cont_numero;
    
    indice_fraccion = 1/indice;
    
    calculo_raiz = pow(numero, indice_fraccion);

    return calculo_raiz;

}

void main(){

    int numero;
    float indice_raiz;
    float resultado_raiz;

    printf("Dime el numero para saber su raiz: ");
    scanf("\n%i",&numero);
    fflush(stdin);

    printf("Dime el indice para hacer su raiz: ");
    scanf("\n%f",&indice_raiz);
    fflush(stdin);

    resultado_raiz = calcular_raiz(numero, indice_raiz);

    printf("El resultado es %f",resultado_raiz);
}