#include <stdio.h>

#define PI 3.14159265;

main ()
{

    float raio, peri1, peri2;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    peri1 = (raio) * PI;
    peri2 = (peri1) + (peri1);

    printf("O perimetro desse circulo e %0.2f", peri2);

}
