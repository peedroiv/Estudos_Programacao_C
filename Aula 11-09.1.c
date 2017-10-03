#include <stdio.h>

void troca(int *n1, int *n2)
{
    int aux;

    if (*n1<*n2)
    {
        aux = *n1;
        *n1 = *n2;
        *n2 = aux;
    }
}

main()
{
    int a, b, c, d, e;

    printf("Digite 5 numeros\n");

    scanf("%i %i %i %i %i", &a, &b, &c, &d, &e);

    troca(&e, &d);
    troca(&e, &c);
    troca(&e, &b);
    troca(&e, &a);
    troca(&d, &c);
    troca(&d, &b);
    troca(&d, &a);
    troca(&c, &b);
    troca(&c, &a);
    troca(&b, &a);

    printf("%i %i %i %i %i", a, b, c, d, e);
}
