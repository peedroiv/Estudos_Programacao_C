#include <stdio.h>

main()
{
    float receitas[3][4], preco[4], total[3]={0};
    int i, ii;

    for(i=0; i<3; i++)
    {
        for(ii=0; ii<4; ii++)
        {
            scanf("%f", &receitas[i][ii]);
        }
    }

    for(i=0; i<4; i++)
    {
        scanf("%f", &preco[i]);
    }

    for(i=0; i<3; i++)
    {
        for(ii=0; ii<4; ii++)
        {
            total[i]+=receitas[i][ii]*preco[ii];
        }
        printf("%.2f\n", total[i]);
    }
}
