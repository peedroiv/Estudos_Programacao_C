#include <stdio.h>

main()
{

    int n, inv1, inv2;

    scanf("%i", &n);

    if (n >= 0){
        inv1 = n%10;
        inv2 = (n/10)%10;
        if (inv1 != 0)
            printf("%i%i", inv1, inv2);
        else
            printf("%i", inv2);
    }
    else{
        n = (n) * -1;
        inv1 = n%10;
        inv2 = (n/10)%10;
        if (inv1 != 0)
            printf("-%i%i", inv1, inv2);
        else
            printf("-%i", inv2);
    }

}
