#include <stdio.h>

int main ()
{
    int n1, n2, soma; int diferenca; int produto; int divisao; int resto;

    n1 = 42;
    n2 = 2;
    soma = (n1) + (n2);
    diferenca = (n1) - (n2);
    produto = (n1) * (n2);
    divisao = (n1) / (n2);
    resto = (n1) % (n2);

    printf("%i + %i = %i\n", n1, n2, soma);
    printf("%i - %i = %i\n", n1, n2, diferenca);
    printf("%i * %i = %i\n", n1, n2, produto);
    printf("%i / %i = %i\n", n1, n2, divisao);
    printf("O resto dessa divisao e %i", resto);

    return 0;
}
