#include <stdio.h>

main(void)
{

    int n1;

    scanf("%d", &n1);

    if (n1 >= 10 && n1 <= 100)
    {
        if ((n1%10) != 0 && (n1%(n1/10) == 0))
        {
             printf("SIM");
        }
        else
        {
            printf("NAO");
        }
    }
    else
        printf("NAO");


}




