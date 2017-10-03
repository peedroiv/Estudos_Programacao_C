#include <stdio.h>

main()
{
    float h1, h2, h3, h4, aux;

    scanf("%f %f %f %f", &h1, &h2, &h3, &h4);

    if (h3>h4)
    {
        aux = h3;
        h3 = h4;
        h4 = aux;
    }
    if (h2>h4)
    {
        aux = h2;
        h2 = h4;
        h4 = aux;
    }
    if (h1>h4)
    {
        aux = h1;
        h1 = h4;
        h4 = aux;
    }
    if (h2>h3)
    {
        aux = h2;
        h2 = h3;
        h3 = aux;
    }
    if (h1>h3)
    {
        aux = h1;
        h1 = h3;
        h3 = aux;
    }
    if (h1>h2)
    {
        aux = h1;
        h1 = h2;
        h2 = aux;
    }
    printf("%0.2f\n%0.2f\n%0.2f\n%0.2f", h1, h3, h4, h2);
}
