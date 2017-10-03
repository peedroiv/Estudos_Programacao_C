#include <stdio.h>

main()
{
    int n, gols, i, ii, pontos=0;

    scanf("%d%d", &n, &gols);

    int favor[n], contra[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &favor[i]);
        scanf("%d", &contra[i]);
        if(favor[i] == contra[i])
        {
            pontos += 1;
        }
        else if(favor[i] > contra[i])
        {
            pontos += 3;
        }
    }

    while(gols > 0)
    {
        for(i=0; i<n && gols>0; i++)
        {
            if(favor[i] == contra[i])
            {
                gols--;
                favor[i]++;
                pontos += 2;
            }
        }
        for(i=0; i<n && gols>0; i++)
        {
            if(favor[i] == contra[i]-1)
            {
                gols--;
                favor[i]++;
                pontos += 1;
            }
        }
        for(i=0; i<n && gols>0; i++)
        {
            if(favor[i] < contra[i])
            {
                gols--;
                favor[i]++;
            }
        }
    }

    printf("%d\n", pontos);
}
