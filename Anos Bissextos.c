#include <stdio.h>

main(void)
{
    int ano1, ano2, i, bissexto=0;

    scanf("%i %i", &ano1, &ano2);

    for(i=ano1; i<=ano2; i++)
    {
        if(i%4==0)
        {
            if(i%100==0)
            {
                if(i%400==0)
                {
                    bissexto++;
                    printf("%d\n", i);
                }
            }
            else
            {
                bissexto++;
                printf("%d\n", i);
            }
        }
    }

    if(bissexto==0)
    {
        printf("-1\n");
    }
}
