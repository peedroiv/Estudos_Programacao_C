#include <stdio.h>

main()
{
    int consumo, total, i;

    scanf("%i", &consumo);

    if (consumo <= 10)
        total = 7;
    else if (consumo <= 30){
        total = 7;
        for (i = 11; i <= consumo; ++i)
            total += 1;
    }
    else if (consumo <= 100){
        total = 27;
        for (i = 31; i <=consumo; ++i)
            total += 2;
    }
    else{
        total = 167;
        for (i = 101; i <= consumo; ++i)
            total += 5;
    }
    printf("%i", total);
}
