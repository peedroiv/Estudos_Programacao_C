#include <stdio.h>

main(void)
{

    int n1, n2, n25;

    scanf("%i %i", &n1, &n2);

    n25 = (n2)-5;

    if (n1%5 == 0){
        while (n1 <= n25){
            printf("%i|", n1);
            n1 += 5;
        }
    }
    else if (n1%5 == 1) {
        n1 = n1+4;
        while (n1 <= n25){
            printf("%i|", n1);
            n1 += 5;
        }
    }
    else if (n1%5 == 2) {
        n1 = n1+3;
        while (n1 <= n25){
            printf("%i|", n1);
            n1 += 5;
        }
    }
    else if (n1%5 == 3) {
        n1 = n1+2;
        while (n1 <= n25){
            printf("%i|", n1);
            n1 += 5;
        }
    }
    else if (n1%5 == 4) {
        n1 = n1+1;
        while (n1 <= n25){
            printf("%i|", n1);
            n1 += 5;
        }
    }

    if (n2%5 == 0){
        printf("%i", n2);
    }
    else if (n2%5 == 1){
        n2 = n2-1;
        printf("%i", n2);
    }
    else if (n2%5 == 2){
        n2 = n2-2;
        printf("%i", n2);
    }
    else if (n2%5 == 3){
        n2 = n2-3;
        printf("%i", n2);
    }
    else if (n2%5 == 4){
        n2 = n2-4;
        printf("%i", n2);
    }

}
