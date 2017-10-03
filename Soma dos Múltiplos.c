#include <stdio.h>

main()
{

    int n, i;
    int soma = 0;

    scanf("%i", &n);

    for (i = 1; i < n; ++i){
        if(i%3 == 0 || i%5 == 0)
            soma += i;
    }
    printf("%i\n", soma);

}
