#include <stdio.h>

main()
{

    int n1, n2, n3, menor, maior, medio;

    scanf("%i %i %i", &n1, &n2, &n3);

    if (n1 < n2 && n2 < n3)
        menor = n1,
        medio = n2,
        maior = n3;

    if (n1 < n3 && n3 < n2)
        menor = n1,
        medio = n3,
        maior = n2;

    if (n2 < n1 && n1 < n3)
        menor = n2,
        medio = n1,
        maior = n3;

    if (n2 < n3 && n3 < n1)
        menor = n2,
        medio = n3,
        maior = n1;

    if (n3 < n1 && n1 < n2)
        menor = n3,
        medio = n1,
        maior = n2;

    if (n3 < n2 && n2 < n1)
        menor = n3,
        medio = n2,
        maior = n1;

    printf("%i\n%i\n%i", menor, medio, maior);

}
