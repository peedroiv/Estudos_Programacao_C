#include <stdio.h>

main(void)
{

    int n1, n2, n3, aux;

    scanf("%i %i %i", &n1, &n2, &n3);

    if (n2<n3)
    {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    if (n1<n3)
    {
        aux = n1;
        n1 = n3;
        n3 = aux;
    }
    if (n1<n2)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    printf("%i %i %i", n1, n2, n3);

}
