#include <stdio.h>

main(void)
{
    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);

    if(a != c && a != b)
    {
        printf("A\n");
    }
    else if(b != c && b != a)
    {
        printf("B\n");
    }
    else if(c != a && c != b)
    {
        printf("C\n");
    }
    else
    {
        printf("*\n");
    }
}
