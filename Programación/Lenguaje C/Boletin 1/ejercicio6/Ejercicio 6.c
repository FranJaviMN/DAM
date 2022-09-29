#include <stdio.h>
#include <math.h>

int main (){
    float cateto_1;
    float cateto_2;

    float hipotenusa;
    float area_triangulo;
    float perimetro_triangulo;

    printf("Digame el cateto numero 1: ");
    scanf("%f",&cateto_1);
    fflush(stdin);

    printf("Digame el cateto numero 2: ");
    scanf("%f",&cateto_2);
    fflush(stdin);

    area_triangulo = (cateto_1*cateto_2)/2;
    hipotenusa = sqrt((cateto_1*cateto_1)+(cateto_2*cateto_2));
    perimetro_triangulo = hipotenusa+cateto_1+cateto_2;

    printf("El area del triangulo es de %.2f metros \n",area_triangulo);
    printf("La hiotenusa del triangulo es %.2f metros \n",hipotenusa);
    printf("El perimetro del triangulo es %.2f metros \n",perimetro_triangulo);

    return(0);

}