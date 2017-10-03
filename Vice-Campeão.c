#include <stdio.h>

main()
{

    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);


    if (a<b && a<c)
    {
        if (b<c)
            printf("%i", b);
        else
            printf("%i", c);
    }
    else if (b<a && b<c)
    {
        if (a<c)
            printf("%i", a);
        else
            printf("%i", c);
    }
    else
    {
        if (b<a)
            printf("%i", b);
        else
            printf("%i", a);
    }

}
