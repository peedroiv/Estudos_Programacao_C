#include <stdio.h>

main(void)
{
    int n;

    scanf("%d", &n);

    if(n==0)
    {
        printf("NULO\n");
    }

    else if(n<0)
    {
        if(n%2==0)
        {
            printf("NEGATIVO PAR\n");
        }
        else
        {
            printf("NEGATIVO IMPAR\n");
        }
    }

    else if(n>0)
    {
        if(n%2==0)
        {
            printf("POSITIVO PAR\n");
        }
        else
        {
            printf("POSITIVO IMPAR\n");
        }
    }
}
