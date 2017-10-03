#include <stdio.h>

main()
{

    int n, inv;

    scanf("%i", &n);

    if (n >= 0){
        do{
            inv = n % 10;
            printf("%i", inv);
            n /= 10 ;
        }while (n != 0);
    }
    else{
        n = (n) * -1;
        printf("-");
        do{
            inv = n % 10;
            printf("%i", inv);
            n /= 10;
        }while (n != 0);
    }

}
