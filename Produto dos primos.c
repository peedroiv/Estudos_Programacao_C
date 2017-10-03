#include <stdio.h>

#define PRIMO 1
#define NPRIMO 0

int primo(int num)
{
    int i, cont=0;

    for(i>1; i<num; i++)
    {
        if(num%i!=0) return NPRIMO;
    }
    return PRIMO;
}

main()
{
    int num1, num2, num3, num4, c1, c2, c3, c4;

    scanf("%i %i %i %i", &num1, &num2, &num3, &num4);

    c1 = primo(num1);
    c2 = primo(num2);
    c3 = primo(num3);
    c4 = primo(num4);

    if(c1*c2*c3*c4 == 1 && num1!=0 && num2!=0 && num3!=0 &num4!=0)
    {
        printf("%i", num1*num2*num3*num4);
    }
    else
    {
        printf("SEM PRODUTO");
    }
}
