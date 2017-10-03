#include <stdio.h>

main()
{
    int lc, cc, ac, ln, cn, an, nl, nc, na, tc;

    scanf("%i %i %i %i %i %i", &lc, &cc, &ac, &ln, &cn, &an);

    nl = ln/lc;
    nc = cn/cc;
    na = an/ac;

    tc = nl*nc*na;

    printf("%i", tc);
}
