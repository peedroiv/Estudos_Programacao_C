#include <stdio.h>

main()
{
    int npaises, nmod, o, p, b, i, ii, aux, ouromax, pratamax;

    scanf("%d %d", &npaises, &nmod);

    int ouro[100]= {0}, prata[100]= {0}, bronze[100]= {0}, ordenado[npaises];

    for(i=0; i<nmod; i++)
    {
        scanf("%d %d %d", &o, &p, &b);

        ouro[o-1]++;
        prata[p-1]++;
        bronze[b-1]++;
    }


    for(i=0; i<npaises; i++)
    {
        ordenado[i] = i;
        for(ii=0; ii<=i; ii++)
        {
            if(ouro[ii] < ouro[i])
            {
                aux = ordenado[i];
                ordenado[i] = ordenado[ii];
                ordenado[ii] = aux;
                ouromax = ouro[i];
            }
        }
    }

    for(i=0; i<npaises; i++)
    {
        for(ii=0; ii<=i; ii++)
        {
            if(ouro[i] == ouromax && prata[ii] < prata[i])
            {
                aux = ordenado[i];
                ordenado[i] = ordenado[ii];
                ordenado[ii] = aux;
                pratamax = prata[i];
            }
        }
    }

    for(i=0; i<npaises; i++)
    {
        for(ii=0; ii<=i; ii++)
        {
            if(prata[i] == pratamax && bronze[ii] < bronze[i])
            {
                aux = ordenado[i];
                ordenado[i] = ordenado[ii];
                ordenado[ii] = aux;
            }
        }
    }

    for(i=0; i<npaises; i++)
    {
        printf("%d\n", ordenado[i]+1);
    }
}
