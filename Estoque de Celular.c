#include <stdio.h>

main()
{
    int estoque, k, semanas, SE, SA, DO, i;

    scanf("%d %d %d", &estoque, &k, &semanas);

    for(i=1; i<=semanas; i++)
    {
        scanf("%d %d %d", &SE, &SA, &DO);

        estoque -= (k*4);
        estoque -= (SE+SA+DO);

        if(estoque <= 0)
        {
            printf("%d ", i);
            break;
        }
    }

    printf("%d", estoque);
}
