#include <stdio.h>

main()
{
    int n, cap, i, entra, sai;
    int pdentro = 0;
    int ultrapassou = 0;

    scanf("%i %i", &n, &cap);

    for(i=1; i<=n; i++)
    {
        scanf("%i %i", &sai, &entra);
        pdentro -= sai;
        pdentro += entra;
        if (pdentro > cap)
            ultrapassou++;
    }

    if (ultrapassou > 0)
        printf("S");
    else
        printf("N");
}
