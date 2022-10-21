#include <stdio.h>


// Generamos la primera funcion donde vamos a calcular el precio con el descuento
float calcular_porcentaje (int precio, int porcentaje){


    // Realizamos el calculo para restarle el descuento al producto
    return precio-(precio*porcentaje)/100;


}


// Funcion que vamos a usar para leer el precio del producto
int leer_precio(){
    
    int precio;
    scanf("\n%i",&precio);
    fflush(stdin);

    return precio;
} 

// Funcion que vamos a usar para leer el porcentaje de descuento


int leer_porcentaje(){

    int porcentaje;
    scanf("\n%i",&porcentaje);
    fflush(stdin);

    return porcentaje;

}


// Funcion principal del programa, donde vamos a presentar el precio con el descuento y preguntamos si
// Queremos seguir calculando precios
void main(){

    int porcentaje;
    int precio;
    int pregunta_usuario;

    printf("Dime el precio del producto: ");
    precio = leer_precio();

    printf("Dime el porcentaje de descuento: ");
    porcentaje = leer_porcentaje();

    //Llamamos a la funcion de calcular para que nos calcule el precio con el descuento
    printf("El valor de del producto con el descuento es de %.2f\n",calcular_porcentaje(precio, porcentaje));

    // Preguntamos al usuario si quiere seguir calculando precios
    printf("¿Quiere seguir calculando precios? (0 = Seguir): ");
    scanf("\n%i",&pregunta_usuario);
    fflush(stdin);
    
    // Creamos un while para seguir haciendo el calculo hasta que el usuario lo pare.
    while (pregunta_usuario == 0){
        printf("Dime el precio del producto: ");
        precio = leer_precio();

        printf("Dime el porcentaje de descuento: ");
        porcentaje = leer_porcentaje();

        printf("El valor de del producto con el descuento es de %.2f\n",calcular_porcentaje(precio, porcentaje));

        printf("¿Quiere seguir calculando precios? (0 = Seguir): ");
        scanf("\n%i",&pregunta_usuario);
        fflush(stdin);
    }

}