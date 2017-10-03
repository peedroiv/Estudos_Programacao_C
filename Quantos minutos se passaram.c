#include <stdio.h>

main()
{

    int hora, minuto, horamin, total;

    scanf("%i %i", &hora, &minuto);

    horamin = (hora) * 60;

    total = (horamin) + (minuto);

    printf("%i minutos.\n", total);
}
