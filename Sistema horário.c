#include <stdio.h>

main (void)
{

    int horas, minutos;

    scanf("%i %i", &horas, &minutos);

    if (horas == 0)
    {
        horas = 12;
        printf("%02i\n%02i\nam", horas, minutos);
    }
    else if (horas >= 1 && horas <= 12){
        if (horas == 12){
            printf("%02i\n%02i\npm", horas, minutos);
        }
        else{
            printf("%02i\n%02i\nam", horas, minutos);
        }
    }
    else if (horas >= 13 && horas <= 23){
            horas -= 12;
            printf("%02i\n%02i\npm", horas, minutos);
    }

}
