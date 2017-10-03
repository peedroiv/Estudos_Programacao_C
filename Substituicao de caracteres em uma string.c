#include <stdio.h>
#include <string.h>

main()
{
    int i, tamanho;
    char str[100], car1, car2;

    gets(str);

    tamanho = strlen(str);

    scanf("%c", &car1);
    getchar();
    scanf("%c", &car2);

    for(i=0; i<tamanho; i++)
    {
        if(str[i] == car1)
        {
            str[i] = car2;
        }
    }

    printf("%s\n", str);
}
