#include <stdio.h>
#include <string.h>

main()
{
    int i, tamanho, no=0;
    char str[200], car;

    gets(str);

    tamanho = strlen(str);

    scanf("%c", &car);

    for(i=0; i<tamanho ; i++)
    {
        if(str[i] == car)
        {
            printf("%d\n", i);
            break;
        }
        else if(str[i] != car)
        {
            no++;
        }
    }

    if (no == tamanho)
    {
        printf("-1\n");
    }
}
