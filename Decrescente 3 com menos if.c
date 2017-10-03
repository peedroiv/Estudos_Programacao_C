#include <stdio.h>

main(void)
{

    int a, b, c, menor, maior;

    scanf("%i %i %i", &a, &b, &c);

    if (a<b){
        menor = a;
        maior = b;
    }
    else{
        menor = b;
        maior = a;
    }

    if (c<menor)
        printf("%i %i %i", maior, menor, c);
    else if (c>maior)
        printf("%i %i %i", c, maior, menor);
    else
        printf("%i %i %i", maior, c, menor);
}
