#include <stdio.h>

main()
{
    int i, n[10], media;
    int soma = 0;

    for (i=0; i<10; ++i)
        scanf("%i", &n[i]);

    for (i=0; i<10; ++i)
        soma += n[i];

    media = soma/10;

    printf("%i", media);
}
