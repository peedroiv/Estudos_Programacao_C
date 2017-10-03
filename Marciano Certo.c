#include <stdio.h>
#include <math.h>

main()
{

    int lado, l, a, p, r, diametro, diagonal;

    scanf("%i %i %i %i", &l, &a, &p, &r);

    diametro = r+r;

    diagonal = sqrt(fabs((l*l) + (a*a) + (p*p)));

    if (diagonal > diametro)
        printf("N");
    else
        printf("S");

}
