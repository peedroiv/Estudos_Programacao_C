#include<stdio.h>

main()
{
    int c1, c2, c3, p1, p2, aux;

    scanf("%i %i %i %i %i", &c1, &c2, &c3, &p1, &p2);

    if (c2>c3)
    {
        aux = c3;
        c3 = c2;
        c2 = aux;
    }

    if (c1>c3)
    {
        aux = c3;
        c3 = c1;
        c1 = aux;
    }

    if (c1>c2)
    {
        aux = c2;
        c2 = c1;
        c1 = aux;
    }

    if (p1>p2)
    {
        aux = p2;
        p2 = p1;
        p1 = aux;
    }

    if (c1 <= p1 && c2 <= p2)
        printf("S");
    else
        printf("N");
}

