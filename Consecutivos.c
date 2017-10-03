#include <stdio.h>

main()
{
    int n, valor1, valor2, i, sequencia1=0, sequencia2=0;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &valor2);

        if(i==1)
        {
            sequencia2++;
            valor1 = valor2;
        }
        else if(valor2 == valor1)
        {
            sequencia2++;
        }
        else if(valor2 != valor1)
        {
            if(sequencia2 > sequencia1)
            {
                sequencia1 = sequencia2;
            }
            sequencia2 = 1;
            valor1 = valor2;
        }
        if(i==n)
        {
            if(sequencia2 > sequencia1)
            {
                sequencia1 = sequencia2;
            }
        }
    }

    printf("%d", sequencia1);
}
