#include <stdio.h>

main()
{
    int n, i, divisao=1, razao;

    scanf("%d", &n);

    int pa[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &pa[i]);
    }

    razao = pa[n-1]-pa[n-2];

    for(i=n-2; i>0; i--)
    {
        if((pa[i]-pa[i-1]) != razao)
        {
            divisao++;
            razao = pa[i]-pa[i-1];
        }
    }

    printf("%d", divisao);
}
