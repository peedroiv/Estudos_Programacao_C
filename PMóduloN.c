/* Algoritmo cálculo de potências módulo n
César Augusto dos Santos Caetano - Engenharia da Computação 2013.2*/
#include <stdio.h>
main()
{
    long int z,n,b,e,p,m;
    scanf("%ld %ld %ld", &z, &e, &n);
    b=z;
    m=e;
    p=1;
    while(m!=0)
    {
        if (m%2!=0)
        {
            p=(b*p)%n;
        }
        m=m/2;
        b=(b*b)%n;
    }
    printf("\n%ld\n", p);
return 0;
}
