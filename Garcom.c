#include <stdio.h>

main()
{
    int i, bandejas, l, c;
    int quebrados=0;

    scanf("%i", &bandejas);

    for (i=1; i<= bandejas; i++)
    {
        scanf("%i %i", &l, &c);
        if (l>c)
        {
            quebrados += c;
        }
    }
    printf("%i", quebrados);
}
