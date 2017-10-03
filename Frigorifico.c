#include <stdio.h>

main()
{
    int n, i, idmg, idmm;
    int id[99999];
    float peso[99999];
    float pmg, pmm;

    scanf("%i", &n);

    scanf("%i %f %i %f", &id[0], &peso[0], &id[1], &peso[1]);

    if (peso[0]<peso[1])
    {
        pmm = peso[0];
        idmm = id[0];
        pmg = peso[1];
        idmg = id [1];
    }
    else
    {
        pmm = peso[1];
        idmm = id[1];
        pmg = peso[0];
        idmg = id [0];
    }

    for (i=2; i<n; ++i)
    {
        scanf("%i %f", &id[i], &peso[i]);
        if (peso[i] < pmm){
            pmm = peso[i];
            idmm = id [i];
        }
        else if (peso[i] > pmg){
            pmg = peso[i];
            idmg = id [i];
        }
    }

    printf("Gordo: id: %i peso: %0.2fKg\nMagro: id: %i peso: %0.2fKg", idmg, pmg, idmm, pmm);

}
