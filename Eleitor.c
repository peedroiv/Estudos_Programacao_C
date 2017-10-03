#include <stdio.h>

main()
{

    int idade;

    scanf("%i", &idade);

    if (idade < 16)
        printf("nao eleitor");

    if (idade >= 18 && idade <= 65)
        printf("eleitor obrigatorio");

    if (idade > 65)
        printf("eleitor facultativo");

    if (idade >= 16 && idade < 18)
        printf("eleitor facultativo");

}
