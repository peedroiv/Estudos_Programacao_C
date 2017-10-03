#include <stdio.h>

main()
{
    struct cardapio
    {
        int codigo;
        char descricao[100];
        float preco;
    };

    int n, i, cod, quant;
    float total=0;

    scanf("%d", &n);

    struct cardapio produto[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &produto[i].codigo);
        getchar();
        gets(produto[i].descricao);
        scanf("%f", &produto[i].preco);
    }

    scanf("%d", &cod);

    while(cod!=0)
    {
        scanf("%d", &quant);

        for(i=0; i<n; i++)
        {
            if(cod == produto[i].codigo){total += (produto[i].preco*quant);}
        }

        scanf("%d", &cod);
    }

    printf("%.2f", total);
}
