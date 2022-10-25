#include <stdio.h>

//Programa donde vamos a tener la posibilidad de poder calcular el interes producido y el capital total
//que vamos a tener junto con ese interes.


// Creamos una funcion donde vamos a calcular el interes producido segun los datos que vamos a pedir
// en el programa principal, de tal forma que tendremos que darle 3 datos de entrada a nuestra funcion
// la cual nos devolvera el valor float del interes, que usaremos en el programa principal.

float calculo_interes_producido(float capita_invertido, float porcentaje_anual, int num_dias_interes){

    // Variable donde vamos a guardar el resultado de la ecuacion para calcular el interes, sera de 
    // tipo float
    float interes;

    // Calculamos el interes mediante esta formula, para guardar el resultado en la variable interes.
    interes = (capita_invertido*porcentaje_anual*num_dias_interes)/(360*100);

    // regresamos como resultado el valor de la variable interes.
    return interes;
}


void main(){


    // Declaramos 5 variables que vamos a usar en la funcion main y en como parametros de entrada en la funcion
    // para calcular el interes.

    // Variable para guardad el capital que se ha invertido.
    float capital_invertido;
    // Variable para guardar el porcentaje anual.
    float porcentaje_anual;
    // Variable para el numero de dias de intereses.
    int num_dias_interes;
    // Variable donde vamos a guardar el resultado de la funcion para calcular los interese.
    float cantidad_interes;
    // Capital total junto con los intereses.
    float capital_total;


    // Pedimos por pantalla los datos que necesitamos, como son el capital, porcentaje y dias de interes.

    printf("Dime el capital que has invertido:               ");
    scanf("%f",&capital_invertido);
    fflush(stdin);

    printf("Dime el porcentaje anual de interes:             ");
    scanf("%f",&porcentaje_anual);
    fflush(stdin);

    printf("Dime la cantidad de dias:                        ");
    scanf("%i",&num_dias_interes);
    fflush(stdin);

    // Calculamos la cantidad de interes llamando a la funcion de calculo_interes_producido que hemos creado anteriormente.
    // Los valores de entrada son el capital, porcentaje y numero de dias.
    cantidad_interes = calculo_interes_producido(capital_invertido, porcentaje_anual, num_dias_interes);

    // Calculamos el capital total que no es mas que la suma del capital y el numero de intereses.
    capital_total = capital_invertido + cantidad_interes;


    // Mostramos por pantala los resultados.
    printf("La cantidad de interes es de:                    %.2f\n",cantidad_interes);
    printf("El total de capital acumulado es de:             %.2f\n",capital_total);
    printf("\n");


}