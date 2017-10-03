#include <stdio.h>

main(void)
{

    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);

    if (a<b && a<c){
        if (b<c)
            printf("%i\n%i\n%i", a, b, c);
        else
            printf("%i\n%i\n%i", a, c, b);
    }
    else if (b<a && b<c){
        if (a<c)
            printf("%i\n%i\n%i", b, a, c);
        else
            printf("%i\n%i\n%i", b, c, a);
    }
    else{
        if (b<a)
            printf("%i\n%i\n%i", c, b, a);
        else
            printf("%i\n%i\n%i", c, a, b);
    }
}
