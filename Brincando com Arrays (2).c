#include <stdio.h>

main()
{
    int n, i, ii, aux;

    scanf("%d", &n);

    int elem[n], ordenado[n];

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &elem[i]);

        ordenado[i] = elem[i];

        if(n>1 && i>0)
        {
            for(ii=0; ii<=i; ii++)
            {
                if(ordenado[ii] < ordenado[i])
                {
                    aux = ordenado[i];
                    ordenado[i] = ordenado[ii];
                    ordenado[ii] = aux;
                }
            }
        }
    }

    for (i = n-1; i >= 0; --i)
        if(i==0)
        {
            printf("%d\n", elem[i]);
        }
        else
        {
            printf("%d ", elem[i]);
        }

    for (i = 1; i < n; ++i)
    {
        printf("%d ", elem[i]);
    }
    printf("%d\n", elem[0]);

    for (i = 0; i < n; ++i)
    {
        if(i==n-1)
        {
            printf("%d\n", ordenado[i]);
        }
        else
        {
            printf("%d ", ordenado[i]);
        }
    }

}
