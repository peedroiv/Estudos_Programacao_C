#include <stdio.h>

main(void)
{

    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);

    if (a<b){
        if (a<c)
            printf("%i", a);
        else
            printf("%i", c);
    }
    else{
        if (b<c)
            printf("%i", b);
        else
            printf("%i", c);
    }
}
