#include <stdio.h>
main()
{
    int a, b,c,aux;
    scanf("%d %d %d",&a,&b,&c);
    int x, y;
    scanf("%d %d",&x,&y);

    if (b>c)
    {
        aux=c;
        c=b;
        b=aux;
    }

    if (a>c)
    {
        aux=c;
        c=a;
        a=aux;
    }

    if (a>b)
    {
        aux=b;
        b=a;
        a=aux;
    }

    if (x>y)
    {
        aux=y;
        y=x;
        x=aux;
    }

    if (a<=x && b<=y)
        printf("S");


    else
        printf("N");


}
