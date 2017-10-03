#include <stdio.h>

main()
{

    int cv , ce, cs, fv, fe, fs, cp, fp;

    scanf("%i %i %i %i %i %i", &cv , &ce, &cs, &fv, &fe, &fs);

    cv *= 3;
    fv *= 3;

    cp = cv+ce;
    fp = fv+fe;

    if (cp>fp)
    {
        printf("C");
    }
    else if (fp>cp)
    {
        printf("F");
    }
    else
    {
        if (cs>fs)
        {
            printf("C");
        }
        else if (fs>cs)
        {
            printf("F");
        }
        else
        {
            printf("=");
        }
    }

}
