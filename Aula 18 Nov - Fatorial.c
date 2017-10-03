#include <stdio.h>

main()
{
    int ffatorial(int x), fatorial, x;

    scanf("%i", &x);

    while(x!=-1)
    {
        fatorial = ffatorial(x);

        printf("O Fatorial de %i eh %i\n", x, fatorial);

        scanf("%i", &x);
    }
}

int ffatorial(int x)
{
    int fatorial;

    if(x==0 || x==1)
    {
        fatorial = 1;
    }
    else
    {
        fatorial = x * ffatorial(x-1);
    }

    return fatorial;
}
