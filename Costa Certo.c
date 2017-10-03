#include <stdio.h>

main()
{
    int m, n, i, ii, costa=0;

    scanf("%d %d", &m, &n);

    char mapa[m][n];

    for(i=0; i<m; i++)
    {
        fflush(stdin);
        for(ii=0; ii<n; ii++)
        {
            scanf("%c", &mapa[i][ii]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(ii=0; ii<n; ii++)
        {
            if(mapa[i][ii] == '#')
            {
                if(i==0 && ii==0)
                {
                    costa++;
                }
                else if(i==0 && ii==(n-1))
                {
                    costa++;
                }
                else if(i==(m-1) && ii==0)
                {
                    costa++;
                }
                else if(i==(m-1) && ii==(n-1))
                {
                    costa++;
                }
                else if(i==0 && ii!=0 && ii!=(n-1))
                {
                    costa++;
                }
                else if(i==(m-1) && ii!=0 && ii!=(n-1))
                {
                    costa++;
                }
                else if(i!=0 && i!=(m-1) && ii==0)
                {
                    costa++;
                }
                else if(i!=0 && i!=(m-1) && ii==(n-1))
                {
                    costa++;
                }
                else if(i!=0 && i!=(m-1) && ii!=0 && ii!=(n-1))
                {
                    if(mapa[i][ii-1] == '.' || mapa[i][ii+1] == '.' || mapa[i+1][ii] == '.' || mapa[i-1][ii] == '.')
                    {
                        costa++;
                    }
                }
            }
        }
    }

    printf("%d", costa);
}
