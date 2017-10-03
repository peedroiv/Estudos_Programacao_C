#include <stdio.h>

main()
{
    int matriz[4][4], i, ii, k;

    scanf("%i", &k);

    while(k!=0)
    {
        for(ii=0; ii<4; ii++)
        {
            for(i=0; i<4; i++)
            {
                scanf("%i", &matriz[i][ii]);
            }
        }

        matriz[0][0]*=k;
        matriz[1][1]*=k;
        matriz[2][2]*=k;
        matriz[3][3]*=k;

        for(i=0; i<4; i++)
        {
            for(ii=0; ii<4; ii++)
            {
                printf("%i ", matriz[i][ii]);
            }
            printf("\n");
        }

        scanf("%i", &k);
    }
}
