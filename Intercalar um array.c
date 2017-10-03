#include <stdio.h>

main()
{

    int n, i;
    int array1[99999];
    int array2[99999];

    scanf("%i", &n);

    for (i = 0; i < n; ++i)
        scanf("%i", &array1[i]);

    for (i = 0; i < n; ++i)
        scanf("%i", &array2[i]);

    for (i = 0; i < n; ++i)
        printf("%i\n%i\n", array1[i], array2[i]);

}
