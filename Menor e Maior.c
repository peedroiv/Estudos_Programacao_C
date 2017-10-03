#include <stdio.h>

main(void)
{

    int n1, n2;

    scanf("%i %i", &n1, &n2);

    if (n1>n2)
        printf("%i eh MAIOR que %i", n1, n2);
    else if (n1<n2)
        printf("%i eh MAIOR que %i", n2, n1);
    else
        printf("%i e %i sao iguais", n1, n2);
}
