#include <stdio.h>

main()
{

    int n, i;
    int elem[50];
    int elem2[50];

    scanf("%i", &n);

    for (i = 0; i < n; ++i)
        scanf("%i", &elem[i]);

    for (i = 0; i < n; ++i)
        elem2[i] = (elem[i])*2;

    for (i = n-1; i >= 0; --i)
        printf("%i\n", elem2[i]);

}
