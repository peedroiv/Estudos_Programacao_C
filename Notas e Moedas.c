#include <stdio.h>

main(void)
{

    int cem, cinquenta, vinte, dez, cinco, dois, um, cinqcents, vintecincocents, dezcents, cincocents, umcent, totalint, totaldec;
    float total;

    scanf("%f", &total);

    totalint = total;
    totaldec = ((total - totalint)*100)+1;
    printf("%i\n\n", totaldec);

    cem =        totalint / 100;
    cinquenta = (totalint % 100) / 50;
    vinte =    ((totalint % 100) % 50) / 20;
    dez =     (((totalint % 100) % 50) % 20) / 10;
    cinco =  ((((totalint % 100) % 50) % 20) % 10) / 5;
    dois =  (((((totalint % 100) % 50) % 20) % 10) % 5) / 2;
    um =   ((((((totalint % 100) % 50) % 20) % 10) % 5) % 2);

    cinqcents =        totaldec / 50;
    vintecincocents = (totaldec % 50) / 25;
    dezcents =       ((totaldec % 50) % 25) / 10;
    cincocents =    (((totaldec % 50) % 25) % 10) / 5;
    umcent =       ((((totaldec % 50) % 25) % 10) % 5);

    printf("NOTAS:\n%i nota(s) de R$ 100.00\n%i nota(s) de R$ 50.00\n%i nota(s) de R$ 20.00\n%i nota(s) de R$ 10.00\n%i nota(s) de R$ 5.00\n%i nota(s) de R$ 2.00\n",
           cem, cinquenta, vinte, dez, cinco, dois);
    printf("MOEDAS:\n%i moeda(s) de R$ 1.00\n%i moeda(s) de R$ 0.50\n%i moeda(s) de R$ 0.25\n%i moeda(s) de R$ 0.10\n%i moeda(s) de R$ 0.05\n%i moeda(s) de R$ 0.01\n",
           um, cinqcents, vintecincocents, dezcents, cincocents, umcent);

}
