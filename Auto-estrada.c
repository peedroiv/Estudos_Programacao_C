#include <stdio.h>

main()
{
    int c, numpaineis=0, i;
    char pista;

    scanf("%d", &c);

    for(i=0; i<c; i++)
    {
        scanf("%s", &pista);
        printf("oi");

        if(pista == 'P')
        {
            numpaineis += 2;
        }
        else if(pista == 'C')
        {
            numpaineis += 2;
        }
        else if(pista == 'A')
        {
            numpaineis += 1;
        }
    }

    printf("%d", numpaineis);
}
