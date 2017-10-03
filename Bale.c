#include <stdio.h>

main()
{
    int i, ii, n;
    int possivel = 0;

    scanf("%i", &n);

    int bal[n];

    for(i=0; i<n; i++)
    {
        scanf("%i", &bal[i]);
    }

    for(i=0; i<n; i++)
    {
        for(ii=0; ii<n; ii++)
        {
            if(i<ii && bal[i]>bal[ii])
                possivel++;
        }
    }

    printf("%i", possivel);
}
