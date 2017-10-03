#include <stdio.h>

main()
{
    int tipo1[4][4]={0}, tipo2[4][4]={0}, tipo3[4][4]={0}, o, d, t, bh=0, bpb=0, i, ii;

    scanf("%i %i %i", &o, &d, &t);

    while(o!=0 || d!=0 || t!=0)
    {
        if(t == 1)
        {
            tipo1[o-1][d-1]++;
        }
        else if(t == 2)
        {
            tipo2[o-1][d-1]++;
        }
        else if(t == 3)
        {
            tipo3[o-1][d-1]++;
        }

        if(o == 1)
        {
            bh++;
        }
        else if(t == 3 && o == 4 && d == 2)
        {
            bpb++;
        }
        else if(t == 3 && o == 4 && d == 4)
        {
            bpb++;
        }

        scanf("%i %i %i", &o, &d, &t);
    }

    printf("Automovel:\n");
    for(i=0; i<4; i++)
    {
        for(ii=0; ii<4; ii++)
        {
            printf("%i ", tipo1[i][ii]);
        }
        printf("\n");
    }

    printf("Caminhao:\n");
    for(i=0; i<4; i++)
    {
        for(ii=0; ii<4; ii++)
        {
            printf("%i ", tipo2[i][ii]);
        }
        printf("\n");
    }

    printf("Onibus:\n");
    for(i=0; i<4; i++)
    {
        for(ii=0; ii<4; ii++)
        {
            printf("%i ", tipo3[i][ii]);
        }
        printf("\n");
    }

    printf("Origem Belo Horizonte: %i\n", bh);

    printf("Onibus: Brasilia - Petropolis ou Barbacena: %i", bpb);
}
