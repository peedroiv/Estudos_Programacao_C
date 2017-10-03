#include <stdio.h>

main()
{
    int n, i, aux;
    int sim = 0;

    scanf("%i", &n);

    int inicio[n], fim[n];

    for (i=0; i<n; i++)
    {
        scanf("%i %i", &inicio[i], &fim[i]);
    }

    for (i=0; i<n-1; i++)
    {
        if (inicio[i] == inicio[i+1] && fim [i]< fim [i+1])
        {
            aux = fim[i];
            fim[i] = fim[i+1];
            fim[i+1] = aux;
        }
        else if (inicio [i]!= inicio[i+1] && fim[i] <= inicio [i+1])
            sim++;
        else
        {
            aux = inicio[i];
            inicio[i] = inicio[i+1];
            inicio[i+1] = aux;
            aux = fim[i];
            fim[i] = fim[i+1];
            fim[i+1] = aux;
        }
    }

    if (inicio[n-1] >= fim[n-2])
        sim++;

    printf("%i", sim);
}
