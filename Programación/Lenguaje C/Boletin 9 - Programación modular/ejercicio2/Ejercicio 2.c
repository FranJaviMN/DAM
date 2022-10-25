#include <stdio.h>

// Funcion donde vamos a calcular el precio del producto teniendo como entrada el peso y el precio al kilo.
float calculo_precio(float precio_peso, float peso){

    // Variable donde guardamos el precio total a pagar
    float precio_a_pagar;

    // Calculamos el precio a pagar
    precio_a_pagar = precio_peso*peso;

    // Devolvemos el precio.
    return precio_a_pagar;
}

void main (){


    // Variables donde vamos a guardar el precio, el peso, precio a pagar del producto, el dinero que
    // entrega el cliente y el dinero que se le devuelve.
    float precio;
    float peso;
    float precio_a_pagar;
    float pago_cliente;
    float devolver_dinero;

    // Pedimos el precio por kilo del producto
    printf("Dime el precio por kilo del producto: ");
    scanf("\n%f",&precio);
    fflush(stdin);

    // Pedimos el peso del producto
    printf("Dime el peso del producto: ");
    scanf("\n%f",&peso);
    fflush(stdin);

    // Llamamos a la funcion de precio a pagar para saber el precio total
    precio_a_pagar = calculo_precio(precio, peso);

    // Mostramos por pantalla el precio.
    printf("El producto cuesta %.2f\n",precio_a_pagar);

    // Pedimos al usuario que nos de el dinero con el que va a pagar
    printf("Introduzca la cantidad con la que va a pagar: ");
    scanf("\n%f",&pago_cliente);
    fflush(stdin);

    // Bucle donde vamos a comprobar si el precio a pagar es mayor al dinero que ha dado el cliente.
    // si es asi, se vuelve a pedir el dinero.
    while (precio_a_pagar > pago_cliente){
        printf("El dinero entregado no es suficiente, entregue una cantidad adecuada: ");
        scanf("\n%f",&pago_cliente);
        fflush(stderr);
    }

    // Calculamos el dinero a devolver.
    devolver_dinero = pago_cliente - precio_a_pagar;

    //Mostramos por pantalla
    printf("Se entregan %.2f euros y se devuelven %.2f euros",pago_cliente,devolver_dinero);

}