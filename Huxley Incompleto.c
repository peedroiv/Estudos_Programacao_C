#include <stdio.h>

int main ()
{
    int n1, n2, n3;
    int maior1, maior;
    int menor1, menor;

    printf("Insira 3 numeros inteiros distintos\n");
    scanf("%i %i %i", &n1, &n2, &n3);

    if (n1 > n2)
        maior1 = n1, menor1 = n2;
    else
        maior1 = n2, menor1 = n1;

    if (maior1 > n3)
        maior = maior1;
    else
        maior = n3;

    if (menor1 < n3)
        menor = menor1;
    else
        menor = n3;

    printf("O Menor e %i\nO Maior e %i", menor, maior);

    return 0;
}
