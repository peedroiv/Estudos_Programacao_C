#include <stdio.h>

main()
{
    int n, i;
    float vantagem(float candidato[], float concorrente[], int x);

    scanf("%i", &n);

    float candidato[n], concorrente[n], diferenca;

    for(i=0; i<n; i++)
    {
        scanf("%f", &candidato[i]);
    }

    for(i=0; i<n; i++)
    {
        scanf("%f", &concorrente[i]);
    }

    diferenca = vantagem(candidato, concorrente, n);

    printf("%.2f", diferenca);
}

float vantagem(float candidato[], float concorrente[], int x)
{
    float dif = 0;
    int j;

    for(j=0; j<x; j++)
    {
        if ((candidato[j]-concorrente[j]) > dif)
        {
            dif = (candidato[j]-concorrente[j]);
        }
    }

    return dif;
}
