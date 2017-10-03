#include <stdio.h>

main()
{

    int n, inv1, inv2, inv3, inv4;

    scanf("%i", &n);

    if (n >= 0){
        inv1 = n%10;
        inv2 = (n/10)%10;
        inv3 = (n/100)%10;
        inv4 = (n/1000)%10;
        if (inv1 == 0 && inv2 == 0 && inv3 == 0)
            printf("%i", inv4);
        else if (inv1 == 0 && inv2 == 0 && inv3 != 0)
            printf("%i%i", inv3, inv4);
        else if (inv1 == 0 && inv2 != 0 && inv3 != 0)
            printf("%i%i%i", inv2, inv3, inv4);
        else
            printf("%i%i%i%i", inv1, inv2, inv3, inv4);
    }
    else{
        n = (n) * -1;
        inv1 = n%10;
        inv2 = (n/10)%10;
        inv3 = (n/100)%10;
        inv4 = (n/1000)%10;
        if (inv1 == 0 && inv2 == 0 && inv3 == 0)
            printf("-%i", inv4);
        else if (inv1 == 0 && inv2 == 0 && inv3 != 0)
            printf("-%i%i", inv3, inv4);
        else if (inv1 == 0 && inv2 != 0 && inv3 != 0)
            printf("-%i%i%i", inv2, inv3, inv4);
        else
            printf("-%i%i%i%i", inv1, inv2, inv3, inv4);
    }

}
