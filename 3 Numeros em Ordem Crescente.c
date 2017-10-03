#include <stdio.h>

main()
{

    int n1, n2, n3;

    scanf("%i %i %i", &n1, &n2, &n3);

    if (n1 < n2 && n2 < n3)
        printf("%i\n%i\n%i", n1, n2, n3);

    if (n1 < n3 && n3 < n2)
        printf("%i\n%i\n%i", n1, n3, n2);

    if (n2 < n1 && n1 < n3)
        printf("%i\n%i\n%i", n2, n1, n3);

    if (n2 < n3 && n3 < n1)
        printf("%i\n%i\n%i", n2, n3, n1);

    if (n3 < n1 && n1 < n2)
        printf("%i\n%i\n%i", n3, n1, n2);

    if (n3 < n2 && n2 < n1)
        printf("%i\n%i\n%i", n3, n2, n1);

}
