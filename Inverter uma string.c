#include <stdio.h>
#include <string.h>

main()
{
    int i, tamanho;
    char str[200];

    gets(str);

    tamanho = strlen(str);

    for(i=tamanho-1; i>=0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}

