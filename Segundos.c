#include <stdio.h>

main(void)
{

    int segundos, minutos, horas;

    scanf("%i", &segundos);

    horas = (segundos) / 3600;
    minutos = (segundos%3600) / 60;
    segundos = (segundos) - (horas*3600) - (minutos*60);

    printf("%i h %i m %i s", horas, minutos, segundos);

}
