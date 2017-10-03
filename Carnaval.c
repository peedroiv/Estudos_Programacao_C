#include <stdio.h>

main()
{
    float n1, n2, n3, n4, n5, aux, soma;

    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    if (n4>n5)
    {
        aux = n5;
        n5 = n4;
        n4 = aux;
    }
    if (n3>n5)
    {
        aux = n5;
        n5 = n3;
        n3 = aux;
    }
    if (n2>n5)
    {
        aux = n5;
        n5 = n2;
        n2 = aux;
    }
    if (n1>n5)
    {
        aux = n5;
        n5 = n1;
        n1 = aux;
    }
    if (n2<n1)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n3<n1)
    {
        aux = n1;
        n1 = n3;
        n3 = aux;
    }
    if (n4<n1)
    {
        aux = n1;
        n1 = n4;
        n4 = aux;
    }

    soma = n2+n3+n4;

    printf("%0.1f", soma);
}
