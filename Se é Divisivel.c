#include <stdio.h>

main()
{

    int n1, n2, resto, resp;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &n1, &n2);

    resto = (n1) % (n2);

    if (resto != 0)
        printf("Os numeros nao sao divisiveis...");
    else
        resp = (n1) / (n2),
        printf("Os numeros sao divisiveis e a resposta seria: %i", resp);

}
