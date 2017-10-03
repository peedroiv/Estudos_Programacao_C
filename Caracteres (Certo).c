#include <stdio.h>

main(void)
{
    int n, i;

    scanf("%i", &n);
    getchar();
    char elem[n];
    while(n!=0)
    {
        gets(elem);

        for (i = n-1; i > 0; --i)
        {

           printf("%c", elem[i]);

        }
        printf("%c\n", elem[i]);
        scanf("%i", &n);
        getchar();
    }
}
