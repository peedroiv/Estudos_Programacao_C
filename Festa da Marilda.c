#include<stdio.h>
#include<string.h>

main()
{
    int i, ii, n, troca;

    scanf("%d", &n);
    getchar();

    char nome[n][100], aux[100];

    for(i=0; i<n; i++)
    {
        gets(nome[i]);
    }

    for(i=n-1; i>0; i--)
    {
        for(ii=i-1; ii>=0; ii--)
        {
            troca = strcmp(nome[i], nome[ii]);
            if(troca < 0)
            {
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[ii]);
                strcpy(nome[ii], aux);
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%s\n", nome[i]);
    }
}
