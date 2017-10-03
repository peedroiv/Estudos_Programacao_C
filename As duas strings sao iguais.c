#include <stdio.h>
#include <string.h>

main()
{
    int i, tamanho1, tamanho2, iguais=0;
    char str1[50], str2[50];

    gets(str1);
    gets(str2);

    tamanho1 = strlen(str1);
    tamanho2 = strlen(str2);

    if(tamanho1!=tamanho2)
    {
        printf("DIFERENTES");
    }
    else
    {
        for(i=0; i<tamanho1; i++)
        {
            if(str1[i] == str2[i])
            {
                iguais++;
            }
            else
            {
                printf("DIFERENTES");
                break;
            }
        }
        if(iguais == tamanho1)
        {
            printf("IGUAIS");
        }
    }


}
