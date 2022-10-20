#include <stdio.h>

void main(){

    float precio_base;
    char tipo_iva;
    char codigo_promocion;

    printf("Dime el precio base: ");
    scanf("%f",&precio_base);
    fflush(stdin);

    printf("Dime el tipo de iva (general, reducido o superreducido): ");
    scanf("%s",tipo_iva);
    fflush(stdin);

    printf("DIme el codigo de promoción (nopro, mitad, meno5 o 5porc): ");
    scanf("%s",codigo_promocion);
    fflush(stdin);

    if (tipo_iva == "general"){
    } switch (codigo_promocion){
        case "general":
        printf("Hola prueba");
    }
}