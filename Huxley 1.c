#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int menor, medio, maior;

    printf("Insira 3 numeros inteiros distintos\n");
    scanf("%i %i %i", &n1, &n2, &n3);

    if (n1 < n2 && n1 < n3);
        menor = n1;
        if (n2 < n3)
            medio = n2,
            maior = n3;
        else
            medio = n3,
            maior = n2;

    if (n2 < n1 && n2 < n3);
        menor = n2;
        if (n1 < n3)
            medio = n1,
            maior = n3;
        else
            medio = n3,
            maior = n1;

    if (n3 < n1 && n3 < n2);
        menor = n3;
        if (n1 < n2)
            medio = n1,
            maior = n2;
        else
            medio = n2,
            maior = n1;

    printf("%i\n%i\n%i", menor, medio, maior);

    return 0;
}
