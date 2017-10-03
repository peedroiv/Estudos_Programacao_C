#include <stdio.h>

main(void)
{
    int dist;
    float combust, consumo;

    scanf("%i %f", &dist, &combust);

    consumo = dist/combust;

    printf("%.3f km/l", consumo);
}
