#include <stdio.h>

main()
{

    int x, y, menor, maior, i;

    scanf("%i %i", &x, &y);

    if (x<y){
        menor = x;
        maior = y;
    }
    else{
        menor = y;
        maior = x;
    }

    for (i = menor+1; i < maior; ++i)
        if (i%5 == 2 || i%5 == 3)
            printf("%i\n", i);


}
