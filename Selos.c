#include <stdio.h>

main()
{
    int n, i, ii;
    int ret = 0;

    scanf("%i", &n);

    if (n>=6 && n%2==0)
    {
        printf("S");
    }

    else
    {
        for(i=2; i<n; i++)
        {
            for(ii=3; ii<n; ii++)
            {
                if (i*ii == n && i != ii)
                {
                    ret++;
                }
            }
        }
        if (ret > 0)
            printf("S");
        else
            printf("N");
    }
}
