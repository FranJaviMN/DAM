#include <stdio.h>

float calcular_exponente_negativo(int exponente){

    int es_negativo = 0;

    if (exponente < 0){

        es_negativo = 1;
        return es_negativo;

    }else{

        return es_negativo;
    }

}

float calcular_potencia(float base, int exponente){

    int cont_numero;
    float numero_elevado;

    for (cont_numero=1; cont_numero <= exponente;cont_numero++){
        numero_elevado = (base*base)+numero_elevado;
    }

    return numero_elevado;

}

void main(){

    float base;
    int exponente;
    float numero_elevado;
    int ver_negativo;

    printf("Dime la base: ");
    scanf("\n%f",&base);
    fflush(stdin);

    printf("Dime el exponente al que quieres elevar %.1f: ",base);
    scanf("\n%i",&exponente);
    fflush(stdin);

    ver_negativo = calcular_exponente_negativo(exponente);

    if (ver_negativo == 1){
        
        exponente = -exponente;

        numero_elevado = calcular_potencia(base, exponente);
        printf("El numero %.1f elevado a %i es 1/%.1f",base,exponente,numero_elevado);

    }else{

        numero_elevado = calcular_potencia(base, exponente);
        printf("El numero %.1f elevado a %i es %.1f",base,exponente,numero_elevado);
    }
}