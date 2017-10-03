#include <stdio.h>

main()
{
    struct caracHab
    {
        int idade;
        char sexo;
        char cabelo;
        char olhos;
    };

    struct caracHab lista[1000];
    int i, id, numHab=0, maisvelho=0, habAR=0;

    scanf("%i", &id);

    for(i=0; id!=-1; i++)
    {
        lista[i].idade = id;

        scanf("%s %s %s", &lista[i].sexo, &lista[i].cabelo, &lista[i].olhos);

        numHab++;

        if(lista[i].idade > maisvelho){maisvelho = lista[i].idade;}

        if(lista[i].sexo == 'f')
        {
            if(lista[i].idade >= 18 && lista[i].idade<=35)
            {
                if(lista[i].cabelo == 'l')
                {
                    if(lista[i].olhos == 'v')
                    {
                        habAR++;
                    }
                }
            }
        }

        scanf("%i", &id);
    }

    float prob = (float)(habAR*100)/numHab;

    printf("Mais velho: %i\nMulheres com olhos verdes, loiras com 18 a 35 anos: %.2f%%", maisvelho, prob);
}
