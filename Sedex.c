#include <stdio.h>

main()
{

    int db, ac, lc, pc;

    scanf("%i %i %i %i", &db, &ac, &lc, &pc);

    if (db<=ac && db<=lc && db<=pc)
        printf("S");

    else
        printf("N");

}
