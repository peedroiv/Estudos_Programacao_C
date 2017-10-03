#include <stdio.h>

main()
{

    int num, resto;
    int total = 0;
    int i = 1;
    int n;

    scanf("%i", &n);

    while (i<=n)
    {
        resto = n%i;
        if (resto == 0)
            total += i;
        i += 1;
        if (total == n+n)
            printf("%i", n);
    }

}
