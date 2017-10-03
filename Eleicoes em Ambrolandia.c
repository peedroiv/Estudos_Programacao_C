#include <stdio.h>

main()
{
    int voto, al83=0, al93=0, branco=0, nulo=0, total=0, vencedor;

    float perc83, perc93;

    scanf("%d", &voto);

    while(voto != -1)
    {
        if(voto == 83)
        {
            al83++;
            total++;
        }
        else if(voto == 93)
        {
            al93++;
            total++;
        }
        else if(voto == 0)
        {
            branco++;
            total++;
        }
        else
        {
            nulo++;
        }

        scanf("%d", &voto);
    }

    if(al83 > al93)
    {
        vencedor = 83;
    }
    else
    {
        vencedor = 93;
    }

    perc83 = (al83*100)/total;
    perc93 = (al93*100)/total;

    printf("%d\n%d\n%d\n%d\n%d\n%.2f\n%.2f", al83, al93, branco, nulo, vencedor, perc83, perc93);
}
