#include <stdio.h>

main()
{
    int n, i;
    float x;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%f", &x);

        int dias = 0;

        while(x>1)
        {
            x/=2;
            dias++;
        }

        printf("%d dias\n", dias);
    }
}
