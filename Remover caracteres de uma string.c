#include <stdio.h>
#include <string.h>

main()
{
    int i, ii, iii, tamanho1, tamanho2;
    char str1[80], str2[80], car1, car2;

    gets(str1);
    gets(str2);

    tamanho1 = strlen(str1);
    tamanho2 = strlen(str2);

    for(ii=0; ii<tamanho2; ii++)
    {
        for(i=0; i<tamanho1; i++)
        {
            if(str1[i] == str2[ii])
            {
                for(iii=i; iii<tamanho1; iii++)
                {
                    str1[iii] = str1[iii+1];
                }
            }
        }
    }

    printf("%s\n", str1);
}
