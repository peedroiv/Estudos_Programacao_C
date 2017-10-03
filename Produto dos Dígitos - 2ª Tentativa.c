#include <stdio.h>

main()
{
    int x;

    scanf("%d", &x);

    int resultado = 1;

    printf("%d\n", x/10);

    while(x/10>10)
    {
        resultado *= x%10;
        x -= (x%10);
        printf("x = %d", x);
    }

    printf("%d", resultado);
}
