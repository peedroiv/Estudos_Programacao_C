#include <stdio.h>


int main()
{
    int n, resto;
    scanf("%i", &n);

    if (n<0){
        n = (n)*-1;
        resto = n%10;
        printf("-%i", resto);
    }
    else{
        resto = n%10;
        printf("%i", resto);
    }
}

