#include <stdio.h>

main(void)
{

    int cinquenta, vinte, dez, cinco, um;

    scanf("%i", &um);

    cinquenta = um / 50;
    vinte = (um % 50) / 20;
    dez = ((um % 50) % 20) / 10;
    cinco = (((um % 50) % 20) % 10) / 5;
    um = um - (cinquenta*50) - (vinte*20) - (dez*10) - (cinco*5);

    printf("Notas de 50: %i\nNotas de 20: %i\nNotas de 10: %i\nNotas de 5: %i\nNotas de 1: %i",
           cinquenta, vinte, dez, cinco, um);

}
