#include <stdio.h>

main()
{
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

    struct dados passageiro[44];
    int passagem, i, totalIdade=0, numpassageiros=0, mediaIdade;

    scanf("%d", &passagem);

    for(i=0; passagem!=-1; i++)
    {
        passageiro[i].numpassagem = passagem;

        scanf("%d/%d/%d", &passageiro[i].dia, &passageiro[i].mes,  &passageiro[i].ano);
        getchar();
        fgets( passageiro[i].de, 100, stdin );
        getchar();
        fgets( passageiro[i].para, 100, stdin );
        scanf("%d:%d", &passageiro[i].horas, &passageiro[i].minutos);
        scanf("%d %d", &passageiro[i].poltrona, &passageiro[i].idade);
        getchar();
        fgets( passageiro[i].nome, 100, stdin );

        totalIdade += passageiro[i].idade;
        numpassageiros++;

        scanf("%d", &passagem);

    }

    mediaIdade = (totalIdade/numpassageiros);

    for(i=0; i<numpassageiros; i++)
    {
        if((passageiro[i].idade > mediaIdade) && (passageiro[i].poltrona%2==0))
        {
            printf("%s\n", passageiro[i].nome);
        }
    }
}
