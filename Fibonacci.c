#include <stdio.h>

main()
{

    int i, contador;

    scanf("%i", &i);

    while(i != 0)
    {
        int n=0;
        int m=1;
        int soma=1;
        for (contador=1; contador<i; contador++)
        {
            printf("%i ", n);
            n = m;
            m = soma;
            soma = n + m;
        }
        printf("%i", n);
        scanf ("%i", &i);
    }

}
