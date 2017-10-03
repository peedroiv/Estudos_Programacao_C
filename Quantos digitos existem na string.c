#include <stdio.h>
#include <string.h>

main()
{
    int digitos=0, i, tamanho;
    char str[200];

    gets(str);

    tamanho = strlen(str);

    for(i=0; i<tamanho; i++)
    {
        if(str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
        {
            digitos++;
        }
    }

    printf("%d", digitos);
}
