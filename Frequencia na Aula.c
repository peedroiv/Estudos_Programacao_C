#include <stdio.h>

main(void)
{
    int n, i, ii;
    int veio = 0;

    scanf("%i", &n);

    int registro[n];

    for(i=0; i<n; i++)
    {
        scanf("%i", &registro[i]);
    }

    for(i=0; i<n; i++)
    {
        for(ii=0; ii<n; ii++)
        {
            if (i != ii && registro[i] == registro[ii])
            {
                registro[i]= -1;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        if(registro[i] != -1)
            veio++;
    }

    printf("%i", veio);
}
