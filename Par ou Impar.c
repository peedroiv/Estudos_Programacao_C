#include <stdio.h>

main()
{

    int n1, resto;

    printf("Digite um numero: ");
    scanf("%i", &n1);

    resto = (n1)%2;

    if (resto > 0)
        printf("Impar");
    else
        printf("Par");

}
