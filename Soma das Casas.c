#include <stdio.h>

main()
{
    int i, ii, n, somak, casa1, casa2;
    int nsomas = 0;

    scanf("%i", &n);

    int ncasa[n];

    for(i=0; i<n; i++)
    {
        scanf("%i", &ncasa[i]);
    }

    scanf("%i", &somak);

    for(i=0; i<n; i++)
    {
        for(ii=0; ii<n; ii++)
        {
            if(ncasa[ii]!= ncasa[i])
            {
                if (ncasa[ii]+ncasa[i] == somak)
                    printf("%i ", ncasa[i]);
            }
        }
    }

}
