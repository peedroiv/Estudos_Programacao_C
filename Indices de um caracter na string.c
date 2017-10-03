#include <stdio.h>
#include <string.h>

main()
{
    int i, tamanho;
    char str[50], car;

    gets(str);

    tamanho = strlen(str);

    scanf("%c", &car);

    for(i=0; i<tamanho ; i++)
    {
        if(str[i] == car)
        {
            printf("%d\n", i);
        }
    }

    printf("-1");
}
