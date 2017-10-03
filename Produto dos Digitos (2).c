#include <stdio.h>

int multQ(int x)
{
    int resultado = 1;

    while(x%10!=0)
    {
        resultado *= x%10;
    }

    return resultado;
}

main()
{
    int N, Q;

    scanf("%i", &N);

    int i, ii;

    for (i=10; i<=N/2; i++)
    {

    }
}
