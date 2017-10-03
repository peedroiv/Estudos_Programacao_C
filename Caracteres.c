#include <stdio.h>

main(void)
{

    int n, i;

    scanf("%i", &n);

    while (n != 0);
    {
        char elem[n];

        fflush(stdin);
        fgets( elem, n, stdin );

        for (i = n-1; i >= 0; --i)
        {
            printf("%c", elem[i]);
        }

        scanf("%i", &n);
    }

}
