#include <stdio.h>

main()
{
    int perfeitos[5], i, n;

    perfeitos[0] = 6;
    perfeitos[1] = 28;
    perfeitos[2] = 496;
    perfeitos[3] = 8128;
    perfeitos[4] = 33550336;

    scanf("%i", &n);

    for(i=0; i<5; i++)
    {
        if(perfeitos[i]<n)
        printf("%i\n", perfeitos[i]);
    }
}
