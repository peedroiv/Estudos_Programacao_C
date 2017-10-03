#include <stdio.h>

main()
{

    int numero[101], i;

    for(i=0; i<101; ++i)
        scanf("%i", &numero[i]);

    for(i=0; i<100; ++i){
        if (numero[i] == numero[100])
            printf("%i\n", i);
    }
}
