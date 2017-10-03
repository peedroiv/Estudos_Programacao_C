#include <stdio.h>

main(void)
{
    int mes;

    scanf("%i", &mes);

    if (mes == 1)
        printf("janeiro");
    else if (mes == 2)
        printf ("fevereiro");
    else if (mes == 3)
        printf ("marco");
    else if (mes == 4)
        printf ("abril");
    else if (mes == 5)
        printf ("maio");
    else if (mes == 6)
        printf ("junho");
    else if (mes == 7)
        printf ("julho");
    else if (mes == 8)
        printf ("agosto");
    else if (mes == 9)
        printf ("setembro");
    else if (mes == 10)
        printf ("outubro");
    else if (mes == 11)
        printf ("novembro");
    else if (mes == 12)
        printf ("dezembro");
    else
        printf ("invalido");
}
