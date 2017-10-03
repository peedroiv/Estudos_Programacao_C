#include <stdio.h>
#include <string.h>

main()
{
    char frase[500];

    gets(frase);

    printf("%d", strlen(frase));
}
