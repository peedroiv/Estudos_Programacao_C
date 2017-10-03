#include <stdio.h>

main()
{
    int a, b, c, aux;

    scanf("%i %i %i", &a, &b, &c);

    if (b>c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    if (a>c)
    {
        aux = a;
        a = c;
        c = aux;
    }

    if (a < (b+c) && b < (a+c) && c < (a+b))
    {
        if ((c*c) == (a*a) + (b*b))
        {
            printf("r");
        }
        else if ((c*c) < (a*a) + (b*b))
        {
            printf("a");
        }
        else if ((c*c) > (a*a) + (b*b))
        {
            printf("o");
        }
    }
    else
    {
        printf ("n");
    }
}
