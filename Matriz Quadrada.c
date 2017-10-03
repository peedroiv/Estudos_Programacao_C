#include <stdio.h>

main()
{
    int n, i, j;

    scanf("%d", &n);

    while(n != 0)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(i==0 || j==0 || i==n-1)
                {
                    printf("1 ");
                }
                else
                {
                    printf("2 ");
                }
            }
            printf("1\n");
        }
        printf("\n");

        scanf("%d", &n);
    }
}
