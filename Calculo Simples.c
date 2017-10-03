#include <stdio.h>

main(void)
{
    int codigo, num;
    float valor, total;

    scanf ("%d %d %f", &codigo, &num, &valor);

    total = (num*valor);

    scanf ("%d %d %f", &codigo, &num, &valor);

    total += (num*valor);

    printf("VALOR A PAGAR: R$ %.2f", total);
}
