#include <stdio.h>

main()
{
    int n, i, t, v, dparcial;
    int dtotal = 0;

    scanf("%i", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%i %i", &t, &v);
        dparcial = v*t;
        dtotal += dparcial;
    }

    printf("%i", dtotal);
}
