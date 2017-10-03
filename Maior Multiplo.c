#include <stdio.h>

main()
{

    int n1, n2, n12;
    int mult;

    scanf("%i %i", &n1, &n2);

    if (n1 > n2){
        printf("sem multiplos menores que %i", n2);
    }
    else{
        for (mult = 1; n12 <= n2; ++mult){
            n12 = n1 * mult;
        }
        n12 = n12 - n1;
        printf("%i", n12);
    }

}
