#include <stdio.h>

main()
{
    int mdc(int x, int y), x, y, MDC, aux;

    scanf("%i %i", &x, &y);

    if(x<y)
    {
        aux = x;
        x = y;
        y = aux;
    }

    MDC = mdc(x, y);

    printf("O MDC eh %i", MDC);
}

int mdc(int x, int y)
{
    if(x%y == 0)
    {
        return y;
    }

    return mdc(x, x%y);
}
