#include <stdio.h>

main()
{
    int x, y;

    scanf("%i %i", &x, &y);

    while (x <= y)
    {
        if ((x%10) != 0 && (x%(x/10) == 0))
        {
            printf("%i\n", x);
        }
        ++x;
    }
}




