#include <stdio.h>

main()
{
    int n, i, ii;

    scanf("%i", &n);

    int periodo1[n][n], periodo2[n][n];

    for(i=0; i<n; i++)
    {
        for(ii=0; ii<n; ii++)
        {
            scanf("%i", &periodo1[i][ii]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(ii=0; ii<n; ii++)
        {
            scanf("%i", &periodo2[i][ii]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(ii=0; ii<n; ii++)
        {
            printf("%i ", periodo1[i][ii]+periodo2[i][ii]);
        }
        printf("\n");
    }
}
