#include <stdio.h>

main()
{
    double n0, n, i;
    double soma = 0;

    scanf("%lf %lf", &n0, &n);

    if (n0<n)
    {
    for(i=n0; i<=n; i++)
        soma+=i;
    }

    else if (n<n0)
    {
        for(i=n; i<=n0; i++)
            soma+=i;
    }

    printf("%.0lf", soma);
}
