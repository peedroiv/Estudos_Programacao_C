#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
    char nome[100];
    int tamanho, i;

    gets(nome);

    tamanho = strlen(nome);

    for(i=0; i<tamanho; i++)
    {
        nome[i] = toupper(nome[i]);
    }

    printf("%s\n", nome);
}
