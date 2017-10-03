#include <stdio.h>

main()
{
    char nome[20];
    float salfixo, vendas, comissao, total;

    fgets( nome, 20, stdin );

    scanf("%f %f", &salfixo, &vendas);

    comissao = (15*vendas)/100;

    total = salfixo+comissao;

    printf("TOTAL = R$ %.2f", total);
}
