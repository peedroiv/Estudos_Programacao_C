#include <stdio.h>

main(void)
{
    double volume;
    int raio;

    scanf("%i", &raio);

    raio = raio*raio*raio;

    volume = 4*(3.14159*raio);

    volume = volume/3;

    printf("VOLUME = %.3lf\n", volume);
}
