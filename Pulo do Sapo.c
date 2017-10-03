#include <stdio.h>

main()
{
    int npedras, nsapos, i, atual;

    scanf("%d%d", &npedras, &nsapos);

    int pedrai[nsapos], dist[nsapos];
    int pedra[100] = {0};

    for(i=0; i<nsapos; i++)
    {
        scanf("%d%d", &pedrai[i], &dist[i]);
        pedrai[i]-=1;
        pedra[pedrai[i]] = 1;

        atual = pedrai[i];
        while(atual >= 0)
        {
            atual -= dist[i];
            if(atual >= 0)
            {
                pedra[atual] = 1;
            }
        }

        atual = pedrai[i];
        while(atual < npedras)
        {
            atual = atual+dist[i];
            if(atual < npedras)
            {
                pedra[atual] = 1;
            }
        }
    }

    for(i=0; i<npedras; i++)
    {
        printf("%d\n", pedra[i]);
    }
}
