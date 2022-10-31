#include <stdio.h>


// Funcion para calcular el exponente negativo
float calcular_exponente_negativo(int exponente){

    // Variable para saber si es negativo
    int es_negativo = 0;    

    // Si exponente es 0, sabemos que es negativo
    if (exponente < 0){

        // Le damos el valor 1 a la variable
        es_negativo = 1;
        // Devolvemos la variable
        return es_negativo;

    }else{
        // Devolvemos la variable en 0
        return es_negativo;
    }

}   

// Funcion para calcular la potencia
float calcular_potencia(float base, int exponente){

    // Variable necesarias 
    int cont_numero;
    float numero_elevado;

    // Creamos un for para realizar la potencia del numero
    for (cont_numero=1; cont_numero <= exponente;cont_numero++){
        numero_elevado = (base*base)+numero_elevado;
    }

    // Devolvemos el numero ya elevado
    return numero_elevado;

}

void main(){

    // Variables necesarias
    float base;
    int exponente;
    float numero_elevado;
    int ver_negativo;

    // Pedimos la base por pantalla
    printf("Dime la base: ");
    scanf("\n%f",&base);
    fflush(stdin);

    // Y pedimos el exponente por pantalla tambien
    printf("Dime el exponente al que quieres elevar %.1f: ",base);
    scanf("\n%i",&exponente);
    fflush(stdin);

    // Comprobamos que sea negativo o no
    ver_negativo = calcular_exponente_negativo(exponente);


    // Condicional donde, si es negativo se hace una cosa, y si no lo es se hace otra
    if (ver_negativo == 1){ 
        
        // Calculamos el exponente negativo
        exponente = -exponente;

        // Calculamos el numero elevado
        numero_elevado = calcular_potencia(base, exponente);
        // Mostramos por pantalla el resultado
        printf("El numero %.1f elevado a %i es 1/%.1f",base,exponente,numero_elevado);

    }else{

        // Calculamos el numero elevado
        numero_elevado = calcular_potencia(base, exponente);
        // Mostramos por pantalla.
        printf("El numero %.1f elevado a %i es %.1f",base,exponente,numero_elevado);
    }
}