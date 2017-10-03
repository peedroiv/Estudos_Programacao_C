#include <stdio.h>
#include <string.h>

main()
{
    int digitos=0, i, tamanho;
    char str[200], car;

    gets(str);

    tamanho = strlen(str);

    scanf("%c", &car);

    for(i=0; i<tamanho; i++)
    {
        if(str[i] == car)
        {
            digitos++;
        }
    }

    printf("%d\n", digitos);
}
