#include <stdio.h>

float calculo_precio(float precio_peso, float peso){

    float precio_a_pagar;

    precio_a_pagar = precio_peso*peso;

    return precio_a_pagar;
}

void main (){

    float precio;
    float peso;
    float precio_a_pagar;
    float pago_cliente;
    float devolver_dinero;

    printf("Dime el precio por kilo del producto: ");
    scanf("\n%f",&precio);
    fflush(stdin);

    printf("Dime el peso del producto: ");
    scanf("\n%f",&peso);
    fflush(stdin);

    precio_a_pagar = calculo_precio(precio, peso);

    printf("El producto cuesta %.2f\n",precio_a_pagar);

    printf("Introduzca la cantidad con la que va a pagar: ");
    scanf("\n%f",&pago_cliente);
    fflush(stdin);

    
    while (precio_a_pagar > pago_cliente){
        printf("El dinero entregado no es suficiente, entregue una cantidad adecuada: ");
        scanf("\n%f",&pago_cliente);
        fflush(stderr);
    }

    devolver_dinero = pago_cliente - precio_a_pagar;

    printf("Se entregan %.2f euros y se devuelven %.2f euros",pago_cliente,devolver_dinero);

}