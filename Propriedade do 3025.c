#include <stdio.h>

main()
{
    int n, soma, p1, p2;

    scanf("%i", &n);

    while (n >= 1000 && n<=9999)
    {
        soma = (n/100+n%100);
        if ((soma)*(soma) == n)
        {
            printf("propriedade do 3025!\n");
        }
        else
        {
            printf("numero comum\n");
        }
        scanf("%i", &n);
    }
}
