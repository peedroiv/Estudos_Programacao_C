#include <stdio.h>

main()
{
    int n, i, ii;

    scanf("%i", &n);

    int matriz[n][n], sh[100000]={0}, sv[100000]={0}, sd1=0, sd2=0, diferente=0, igualh, igualv;

    for(i=0; i<n; i++)
    {
        for(ii=0; ii<n; ii++)
        {
            scanf("%i", &matriz[i][ii]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(ii=0; ii<n; ii++)
        {
            sh[i]+=matriz[i][ii];
            sv[i]+=matriz[ii][i];
            if(i==ii)
            {
                sd1+=matriz[i][ii];
            }
        }
        ii=n-(i+1);
        sd2+=matriz[i][ii];
    }

    igualh = sh[0];
    igualv = sv[0];

    for (i=1; i<n; i++)
    {
        if(sh[i]!=sh[i-1])
        {
            diferente++;
            break;
        }
        if(sv[i]!=sv[i-1])
        {
            diferente++;
            break;
        }
    }

    if(diferente>0)
    {
        printf("-1");
    }
    else if (igualh==igualv && igualv==sd1 && sd1==sd2)
    {
        printf("%i", (igualh+igualv+sd1+sd2)/4);
    }
    else
    {
        printf("-1");
    }
}
