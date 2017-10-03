#include <stdio.h>

main()
{
    int valores[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int meio, inicio, fim, n;

    inicio = 0;
    fim = 9;
    meio = 4;

    scanf("%d", &n);

    while(inicio <= fim)
    {
        if(valores[meio] == n)
        {
            printf("O valor esta na posicao %d", meio);
            break;
        }
        else if(n > valores[meio])
        {
            inicio = meio+1;
        }
        else if(n < valores[meio])
        {
            fim = meio-1;
        }

        meio = (inicio+fim)/2;
    }
}
