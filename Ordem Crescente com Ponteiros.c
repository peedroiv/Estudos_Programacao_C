#include <stdio.h>

main()
{
    void troca(int *x, int *y);
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    troca(&c, &b);
    troca(&c, &a);
    troca(&b, &a);

    printf("%d\n%d\n%d", a, b, c);
}

void troca(int *x, int *y)
{
    int aux;

    if(*x<*y)
    {
        aux = *x;
        *x = *y;
        *y = aux;
    }
}
