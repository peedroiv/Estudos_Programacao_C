#include <stdio.h>

main()
{
    int x, n, i, j;

    scanf("%d", &n);

    //n = Números de Linhas e Colunas

    while(n!=0)
    {
		int matriz[n][n];
        int preenche = 0;

        for(x=0; x<(n+1)/2; x++)
        {
            i = x;
            j = x;
            preenche++;

            for(; i<n-x; i++)
            {
                matriz[i][x] = preenche;
            }
            i--;
            j++;

            for(; j<n-x; j++)
            {
                matriz[i][j] = preenche;
            }
            j--;
            i--;

            for(; i>=x; i--)
            {
                matriz[i][j] = preenche;
            }
            i++;
            j--;

            for(; j>x; j--)
            {
                matriz[i][j] = preenche;
            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n-1; j++)
            {
                printf("%d ", matriz[i][j]);
            }
            printf("%d\n", matriz[i][n-1]);
        }
        printf("\n");

        scanf("%d", &n);
    }
}
