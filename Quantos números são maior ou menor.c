#include <stdio.h>

main()
{
    int n, i;
    int acima = 0;
    int abaixo = 0;

    scanf("%i", &n);

    float notas[n], media, dezpc;
    float soma = 0;

    for (i=0; i<n; ++i)
    {
        scanf("%f", &notas[i]);
    }

    for (i=0; i<n; ++i)
    {
        soma += notas[i];
    }

    media = soma/n;

    dezpc = media/10;

    for (i=0; i<n; ++i)
    {
        if (notas[i] >= (media+dezpc))
            ++acima;
        else if (notas [i] <= (media-dezpc))
            ++abaixo;
    }

    printf("%.2f\n%i\n%i", media, acima, abaixo);
}
