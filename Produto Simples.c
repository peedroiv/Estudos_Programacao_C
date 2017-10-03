#include <stdio.h>

main(void)
{
    int n, PROD=1;

    scanf("%i", &n);

    while(n!=EOF)
    {
        PROD*=n;
        scanf("%i", &n);
    }

    printf("%i\n", PROD);
}
