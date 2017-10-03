#include <stdio.h>

main()
{
    int matriz1[2][4]={{-10, 1, 4, 6}, {2, 3, 2, 8}};
    int matriz2[2][4]={{1, 8, 4, -1}, {0, 6, 3, -3}};
    int matrizs[2][4], i, ii;

    for(i=0; i<2; i++)
    {
        for(ii=0; ii<4; ii++)
        {
            matrizs[i][ii] = matriz2[i][ii] + matriz1[i][ii];
        }
    }

    for(i=0; i<2; i++)
    {
        for(ii=0; ii<4; ii++)
        {
            printf("%i ", matrizs[i][ii]);
        }
        printf("\n");
    }
}
