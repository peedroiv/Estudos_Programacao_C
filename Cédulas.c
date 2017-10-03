#include <stdio.h>

main(void)
{

    int cem, cinquenta, vinte, dez, cinco, dois, um;

    scanf("%d", &um);

    cem =        um / 100;
    cinquenta = (um % 100) / 50;
    vinte =    ((um % 100) % 50) / 20;
    dez =     (((um % 100) % 50) % 20) / 10;
    cinco =  ((((um % 100) % 50) % 20) % 10) / 5;
    dois =  (((((um % 100) % 50) % 20) % 10) % 5) / 2;
    um = um - (cem*100) - (cinquenta*50) - (vinte*20) - (dez*10) - (cinco*5) - (dois*2);

    printf("%i nota(s) de R$ 100.00\n%i nota(s) de R$ 50.00\n%i nota(s) de R$ 20.00\n%i nota(s) de R$ 10.00\n%i nota(s) de R$ 5.00\n%i nota(s) de R$ 2.00\n%i nota(s) de R$ 1.00",
           cem, cinquenta, vinte, dez, cinco, dois, um);

}
