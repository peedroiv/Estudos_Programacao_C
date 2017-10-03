#include <stdio.h>

main()
{
    int n, i;
    int ped[1000];
    int estoque = 0;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%i", &ped[i]);
        ped[i] -= 1;
        estoque += ped[i];
    }
    printf("%i", estoque);
}
