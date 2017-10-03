#include <stdio.h>

main()
{
    int x, n, i, j;

    scanf("%d", &n);

    int matriz[n][n];

    for(x=0; x<(n+1)/2; x++)
    {
        i = x;
        j = x;

        for(; i<n-x; i++)
        {
            scanf("%d", &matriz[i][x]);
        }
        i--;
        j++;

        for(; j<n-x; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        j--;
        i--;

        for(; i>=x; i--)
        {
            scanf("%d", &matriz[i][j]);
        }
        i++;
        j--;

        for(; j>x; j--)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\n", matriz[i][j]);
        }
    }
}
