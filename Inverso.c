#include <stdio.h>

main()
{

    int n, i;
    int elem[99999];

    scanf("%i", &n);

    for (i = 0; i < n; ++i)
        scanf("%i", &elem[i]);

    for (i = n-1; i >= 1; --i)
        printf("%i ", elem[i]);

    printf("%i\n", elem[0]);

}
