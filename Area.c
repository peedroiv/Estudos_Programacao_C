#include <stdio.h>

main(void)
{
    double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &a, &b, &c);

    triangulo = (a*c)/2;

    circulo = (c*c)*(3.14159);

    trapezio = ((a+b)*c)/2;

    quadrado = b*b;

    retangulo = a*b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf", triangulo, circulo, trapezio, quadrado, retangulo);
}
