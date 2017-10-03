#include <stdio.h>

main()
{
    int n, i, total=0, metade=0;

    scanf("%d", &n);

    int secao[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &secao[i]);
        total += secao[i];
    }

    for(i=0; metade<(total/2); i++)
    {
        metade += secao[i];
    }

    printf("%d", i);
}
