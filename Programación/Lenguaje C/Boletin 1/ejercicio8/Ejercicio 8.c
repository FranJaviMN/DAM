#include <stdio.h>
#define precio_cola 0.17
#define precio_naranja 0.20
#define precio_limon 0.19

int main(){
    int num_colas;
    int num_naranja;
    int num_limon;

    float precio_total_cola;
    float precio_total_limon;
    float precio_total_naranja;

    printf("Dime cuantas latas de colas has comprado: ");
    scanf("%d",&num_colas);
    fflush(stdin);

    precio_total_cola = num_colas*precio_cola;

    printf("Dime cuantas latas de naranja has comprado: ");
    scanf("%d",&num_naranja);
    fflush(stdin);

    precio_total_naranja = num_naranja*precio_naranja;

    printf("Dime cuantas latas de limon has comprado: ");
    scanf("%d",&num_limon);
    fflush(stdin);

    precio_total_limon = num_limon*precio_limon;

    printf("Producto    Ventas      Precio      Total\n");
    printf("-----------------------------------------\n");
    printf("Cola        %i         %f    %.3f\n",num_colas, precio_cola,precio_total_cola);
    printf("Limon       %i         %f    %.3f\n",num_limon, precio_limon, precio_total_limon);
    printf("Naranja     %i         %f    %.3f\n",num_naranja, precio_naranja,precio_total_naranja);
}