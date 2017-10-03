#include <stdio.h>

main()
{
    int i, h, a1[20], a2[20];
    int nenhum = 0;

    for (i=0; i<20; ++i){
        scanf("%i", &a1[i]);
    }
    for (i=0; i<20; ++i){
        scanf("%i", &a2[i]);
    }

    for (i=0; i<20; ++i){
        for (h=0; h<20; ++h){
            if (a1[i] == a2[h])
                printf("%i\n", a2[h]);
            else
                ++nenhum;
        }
    }

    if (nenhum >= 400)
        printf("VAZIO");
}
