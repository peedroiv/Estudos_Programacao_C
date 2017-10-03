#include <stdio.h>

main()
{
    int treino, comp, fim;

    scanf("%i %i", &treino, &comp);

    if (treino >= comp)
    {
        while (treino >= comp+comp)
        {
            treino -= comp;
        }
        fim = treino - comp;
    }
    else
    {
        fim = treino;
    }

    printf("%i", fim);
}
