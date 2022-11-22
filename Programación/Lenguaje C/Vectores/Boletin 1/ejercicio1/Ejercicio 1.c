#include <stdio.h>



void rellena_vector(int vector_10[10]){

    int num_vector;

    for (num_vector=0;num_vector<10;num_vector++){
        printf("Dime el numero %i: ",num_vector+1);
        scanf("%i,\n",&vector_10[num_vector]);
        fflush(stdin);
    }
}

void realiza_calculos(int vector[10]){

    int cont_vectores = 0;
    int num_negativos = 0;
    int num_positivos = 0;
    int num_ceros = 0;


    for (cont_vectores=0;cont_vectores<10;cont_vectores++){
        if (vector[cont_vectores] < 0){
            num_negativos = num_negativos + 1;
        }else if (vector[cont_vectores] == 0){
            num_ceros = num_ceros + 1;
        }else{
            num_negativos = num_positivos+1;
        }
    }

        printf("Hay %i numeros negativos\n", num_negativos);
        printf("Hay %i 0\n", num_ceros);
        printf("Hay %i numeros positivos\n", num_positivos);

}

void main(){

    int vector_10[10];
    rellena_vector(vector_10);
    realiza_calculos(vector_10);


}