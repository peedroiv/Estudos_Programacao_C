#include <stdio.h>

main()
{
    int n, maior;

    scanf("%i", &maior);

    while (n != 0){
        scanf("%i", &n);
        if (n > maior){
            maior = n;
        }
    }

    printf("%i", maior);
}
