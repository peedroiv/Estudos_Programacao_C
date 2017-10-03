#include <stdio.h>

main()
{
    int n, i;

    scanf("%i", &n);

    while (n != -1)
    {
        int soma = 0;
        for (i=1; i<=n; ++i)
        {
            if (n%i == 0)
                soma += 1;
        }
        if (soma == 2)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
        scanf("%i", &n);
    }

}
