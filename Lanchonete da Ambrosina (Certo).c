#include <stdio.h>

main()
{
    struct cardapio
    {
        int codigo;
        char descricao[100];
        double preco;
    };

    int n, i, cod, quant;
    double total=0;

    scanf("%d", &n);

    struct cardapio produto[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &produto[i].codigo);
        getchar();
        fgets( produto[i].descricao, 100, stdin );
        scanf("%lf", &produto[i].preco);
    }

    scanf("%d", &cod);

    while(cod!=0)
    {
        scanf("%d", &quant);
        if(quant>0)
        {
            for(i=0; i<n; i++)
            {
                if(cod == produto[i].codigo)
                {
                    total += (produto[i].preco*quant);
                }
            }
        }
        scanf("%d", &cod);
    }

    printf("%.2lf", total);
}
