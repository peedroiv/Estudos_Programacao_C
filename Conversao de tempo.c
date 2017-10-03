#include <stdio.h>

main()
{
    int segundos, minutos=0, horas=0;

    scanf("%d", &segundos);

    while(segundos >= 60)
    {
        segundos -= 60;
        minutos++;
    }

     while(minutos >= 60)
    {
        minutos -= 60;
        horas++;
    }

    printf("%d:%d:%d", horas, minutos, segundos);
}
