#include <stdio.h>
#include <math.h>

main()
{
    int n, i, xi, yi, xf, yf, base, altura, com1, com2, com3;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d %d", &xi, &yi, &xf, &yf);

        if(xi>xf)
        {
            base = xi-xf;
        }
        else
        {
            base = xf-xi;
        }
        if(yi>yf)
        {
            altura = yi-yf;
        }
        else
        {
            altura = yf-yi;
        }

        com1 = sqrt((base*base)+(altura*altura));

        scanf("%d %d %d %d", &xi, &yi, &xf, &yf);

        if(xi>xf)
        {
            base = xi-xf;
        }
        else
        {
            base = xf-xi;
        }
        if(yi>yf)
        {
            altura = yi-yf;
        }
        else
        {
            altura = yf-yi;
        }

        com2 = sqrt((base*base)+(altura*altura));

        scanf("%d %d %d %d", &xi, &yi, &xf, &yf);

        if(xi>xf)
        {
            base = xi-xf;
        }
        else
        {
            base = xf-xi;
        }
        if(yi>yf)
        {
            altura = yi-yf;
        }
        else
        {
            altura = yf-yi;
        }

        com3 = sqrt((base*base)+(altura*altura));

        if (com1 < (com2+com3) && com2 < (com1+com3) && com3 < (com1+com2))
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }
}
