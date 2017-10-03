#include <stdio.h>

main()
{

    int n1, n2;

    scanf("%i %i", &n1, &n2);

    if (n1%2 == 1){
        while (n1 <= n2){
            printf("%i\n", n1);
            n1 += 2;
        }
    }
    if (n1%2 == 0) {
        n1 = n1+1;
        while (n1 <= n2){
            printf("%i\n", n1);
            n1 += 2;
        }
    }
}
