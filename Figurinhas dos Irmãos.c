#include <stdio.h>

main()
{
    int n, i, h;
    int elem[99999];
    int sj = 0;
    int sm = 0;
    int qj = 0;
    int qm = 0;

    scanf("%i", &n);

    for (i = 0; i < n; ++i)
        scanf("%i", &elem[i]);

    for (i = 0; i < n; ++i)
    {
        if (elem[i]%2 == 0)
            sj += elem[i];
        else
            sm += elem[i];
    }

    for (i = 0; i < n; ++i)
    {
        if (elem[i]%2 == 0)
            qj += 1;
        else
            qm += 1;
    }

    for (i = 0; i < n; ++i)
    {
        if (elem[i]%2 == 0)
        {
            for (h = 0; h < n; ++h)
            {
                if (elem[h] == elem[i])
                    sj -= elem[h];
            }
        }
        else
        {
            for (h = 0; h < n; ++h)
            {
                if (elem[h] == elem[i])
                    sm -= elem[h];
            }

        }
    }

    if (sj > sm)
        printf("%i %i %i", qj, qm, sj);
    if (sm > sj)
        printf("%i %i %i", qj, qm, sm);

}
