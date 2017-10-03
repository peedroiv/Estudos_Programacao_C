#include <stdio.h>

main()
{
    int lg, cg, ag, lc, cc, ac, aux;

    scanf("%i %i %i %i %i %i", &lg, &cg, &ag, &lc, &cc, &ac);

	if(lg>cg)
	{
		aux=lg;
		lg=cg;
		cg=aux;
	}

	if(lc>cc)
	{
		aux=lc;
		lc=cc;
		cc=aux;
	}

    if(lg>=lc && cg>=cc && ag>=ac)
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }
}
