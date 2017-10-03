#include <stdio.h>

main()
{

    int i, n;
    int tempo = 0;

    scanf("%i", &n);

    int pessoa[n];

    for (i=0; i<n; i++)
        scanf("%i", &pessoa[i]);

    for (i=0; i<n-1; i++)
    {

        if (pessoa[i+1]-pessoa[i] < 10)
        {
            tempo += (pessoa[i+1]-pessoa[i]);
        }
        else
        {
            tempo += 10;
        }
    }
    tempo += 10;
    printf("%i", tempo);
}
