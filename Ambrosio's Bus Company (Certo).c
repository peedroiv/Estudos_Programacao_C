#include <stdio.h>
#include <string.h>

struct dados
{
    int numpassagem;
    int dia;
    int mes;
    int ano;
    char de[100];
    char para[100];
    int horas;
    int minutos;
    int poltrona;
    int idade;
    char nome[100];
};
main()
{



    int  i=0, totalIdade=0, numpassageiros=0, mediaIdade;

    struct dados passageiro[44];

    scanf("%d", &passageiro[i].numpassagem);

    while(passageiro[i].numpassagem != -1)
    {
        scanf("%d/%d/%d", &passageiro[i].dia, &passageiro[i].mes,  &passageiro[i].ano);
        getchar();
        gets(passageiro[i].de);
        gets(passageiro[i].para);
        scanf("%d:%d", &passageiro[i].horas, &passageiro[i].minutos);
        scanf("%d%d", &passageiro[i].poltrona, &passageiro[i].idade);
        getchar();
        gets(passageiro[i].nome);
        i++;
        numpassageiros++;

        scanf("%d", &passageiro[i].numpassagem);

    }
    if(passageiro[0].numpassagem != -1)
    {
        for (i=0; i<=numpassageiros; i++)
        {
            totalIdade += passageiro[i].idade;
        }
        mediaIdade = (totalIdade/numpassageiros);

        for(i=0; i<=numpassageiros; i++)
        {
            if(passageiro[i].idade > mediaIdade && (passageiro[i].poltrona%2==0))
            {
                printf("%s\n", passageiro[i].nome);
            }
        }
    }
}
