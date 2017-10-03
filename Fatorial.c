#include <stdio.h>

main()
{
    int n, resp, i;

    scanf("%i", &n);

    while(n!=-1)
    {
        if(n!=-1)
        {
        resp = 1;

        for(i=n; i>=1; i--)
        {
            resp*=i;
        }

        printf("%i\n", resp);

        scanf("%i", &n);
        }
    }
}
