#include <stdio.h>


// Rellenamos un vector con 10 valores que nos de el usuario
void rellena_vector(int vector_10[10]){

    // Valor de incremento
    int num_vector;

    // Bucle donde vamos a ir pidiendo al usuario los numeros hasta llegar a los 10 numeros
    for (num_vector=0;num_vector<10;num_vector++){
        printf("Dime el numero %i: ",num_vector+1);
        scanf("%i,\n",&vector_10[num_vector]);
        fflush(stdin);
    }
}

// Funcion donde vamos a mostrar el vector de forma inversa y normal
void mostrar_vector(int vector[10]){

    // Contador
    int cont_vectores = 0;

    // Mostramos el vector
    printf("Vemos el vector ordenador:\n");
    for (cont_vectores=0;cont_vectores<10;cont_vectores++){
        printf("| %i |",vector[cont_vectores]);
    }

    // Lo mostramos desordenado.
    printf("Vemos el vector volteado: \n");
    for (cont_vectores=9;cont_vectores >= 0;cont_vectores--){
        printf("| %i |",vector[cont_vectores]);
    }

}


void main(){

    int vector[10];

    rellena_vector(vector);
    mostrar_vector(vector);
}