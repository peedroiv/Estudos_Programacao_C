#include <stdio.h>
#include <math.h>

main(void)
{
    int x1, x2, y1, y2, aux;
    float dist;

    scanf("%i %i %i %i", &x1, &y1, &x2, &y2);

    if(x1>x2)
    {
        aux = x1;
        x1 = x2;
        x2 = aux;
    }
    if(y1>y2)
    {
        aux = y1;
        y1 = y2;
        y2 = aux;
    }

    dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    printf("%.4f", dist);
}
