#include <stdio.h>

int multQ(int x)
{
    int resultado = 1;

    while(x/10!=1)
    {
        resultado *= x%10;
        x -= (x%10);
    }

    return resultado;
}

main()
{
    int N, Q;

    scanf("%i", &N);

    int i;

    for (i=10; i<=N/2; i++)
    {
        Q = multQ(i);
        if(Q==N)
        {
            printf("%i", i);
            break;
        }
    }
}
