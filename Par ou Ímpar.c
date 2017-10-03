#include <stdio.h>

main(void)
{

    int n, resto;
    scanf("%i", &n);

    resto = (n)%2;

    if (resto != 0){
        printf("o numero %i é impar", n);
    }

    else{
        printf("o numero %i é par", n);
    }

}
