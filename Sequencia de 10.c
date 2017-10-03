#include <stdio.h>

main(void)
{

    int numero[10];
    int i;
    int a = 0;

    for (i = 0; i < 10; ++i)
        scanf("%i", &numero[i]);

    for (i = 0; i < 10; ++i){
        if (numero[9] == numero[i])
            ++a;
    }

    printf("O numero %i apareceu %i vezes\n", numero[9], a);

}
