#include <stdio.h>

main ()
{
    double raio, area;

    scanf("%lf", &raio);

    area = (raio*raio)*(3.14159);
    area = area/10000;

    printf("Area = %.4lf\n", area);
}
