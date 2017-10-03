#include <stdio.h>

main()
{
    int n, i, ii;
    int ret = 0;

    scanf("%i", &n);

    if(n>=4)
    {
        for(i=2; i<n; i++)
        {
            if(n%i==0)
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
