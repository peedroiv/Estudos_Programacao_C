#include <stdio.h>

main()
{
    int n, i, ii, aux;

    int elem[1000];

    scanf("%d", &n);

    for (i = 0; i < n; ++i)
        scanf("%d", &elem[i]);

    if(n > 1)
    {
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
            if(i==n-1)
            {
                printf("%d\n", elem[0]);
            }
        }

        for(i=n-1; i>0; i--)
        {
            for(ii=i-1; ii>=0; ii--)
            {
                if(elem[i] > elem[ii])
                {
                    aux = elem[i];
                    elem[i] = elem[ii];
                    elem[ii] = aux;
                }
            }
        }

        for (i = 0; i < n; ++i)
        {
            if(i==n-1)
            {
                printf("%d\n", elem[i]);
            }
            else
            {
                printf("%d ", elem[i]);
            }
        }
    }

    else if(n == 1)
    {
        printf("%d\n%d\n%d\n", elem[0], elem[0], elem[0]);
    }
}
