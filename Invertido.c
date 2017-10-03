#include <stdio.h>
#include <stdio.h>

main()
{

    int n, inv1, inv2, inv3;

    scanf("%i", &n);

    if (n >= 0){
        inv1 = n%10;
        inv2 = (n/10)%10;
        inv3 = (n/100)%10;
        printf("%i%i%i", inv1, inv2, inv3);
    }
    else{
        n = (n) * -1;
        inv1 = n%10;
        inv2 = (n/10)%10;
        inv3 = (n/100)%10;
        printf("-%i%i%i", inv1, inv2, inv3);
    }

}
