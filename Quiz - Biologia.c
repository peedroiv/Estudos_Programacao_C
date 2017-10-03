#include <stdio.h>

main()
{

    int soma = 0;
    int resp;
    float percentual;

    printf("QUIZ DE BIOLOGIA: REINO ANIMAL\n\nPedro Ivo Mariano de Oliveira Barros\n\nPara responder, digite o numero correspondente a alternativa correta e aperte enter.\nSua pontuacao sera dada no final.\n\n");

    //Primeira Questão
    printf("\n\nQUESTAO 1 - Comparando-se evolutivamente, o animal mais proximo do homem e:\n\n");
    printf("(1) O peixe\n"
           "(2) O rato\n"
           "(3) O sapo\n"
           "(4) O pinguim\n"
           "(5) O lagarto\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 2)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 2");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Segunda Questão
    printf("\n\n\nQUESTAO 2 - Quais foram os primeiros vertebrados a conquistar o ambiente terrestre?\n\n");
    printf("(1) Mamiferos\n"
           "(2) Aves\n"
           "(3) Anfibios\n"
           "(4) Repteis\n"
           "(5) Peixes\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 4)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 4");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Terceira Questão
    printf("\n\n\nQUESTAO 3 - Das caracteristicas abaixo, a que melhor permite determinar um animal como reptil?\n\n");
    printf("(1) Sao as escamas.\n"
           "(2) Sao os poros femurais do macho.\n"
           "(3) E a ausencia de glandulas na pele.\n"
           "(4) E a capacidade de autonomia e regeneracao.\n"
           "(5) E a presenca da cauda.\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 2)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 2");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Quarta Questão
    printf("\n\n\nQUESTAO 4 - Em qual dos vertebrados abaixo ocorre um estagio larval em seu ciclo de vida?\n\n");
    printf("(1) Tartaruga\n"
           "(2) Tubarao\n"
           "(3) Sapo\n"
           "(4) Galinha\n"
           "(5) Cachorro\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 3)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 3");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Quinta Questão
    printf("\n\n\nQUESTAO 5 - O coracao dos anfibios possui:\n\n");
    printf("(1) Um atrio e um ventriculo, ambos sem septos.\n"
           "(2) Um atrio com septo parcial e um ventriculo sem septo.\n"
           "(3) Um atrio e um ventriculo, ambos com septos parciais.\n"
           "(4) Dois atrios e um ventriculo. \n"
           "(5) Dois atrios e dois ventriculos.\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 4)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 4");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Sexta Questão
    printf("\n\n\nQUESTAO 6 - Sobre os mamiferos, marque a alternativa INCORRETA:\n\n");
    printf("(1) Pelos, glandulas, dentes diferenciados e a presenca de diafragma caracterizam os mamiferos.\n"
           "(2) Mamiferos excretam ureia.\n"
           "(3) Todas as femeas de mamiferos possuem mamas.\n"
           "(4) A maioria dos mamiferos pertence ao grupo dos euterios, tendo como principal caracteristica a presenca de placenta bem desenvolvida e duradoura.\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 4)
    {
    if (resp == 3)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 3");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 4);

    //Setima Questão
    printf("\n\n\nQUESTAO 7 - Dos exemplos abaixo, quais os unicos que respiram por pulmoes?\n\n");
    printf("(1) Peixe-Boi, Jacare e Pato.\n"
           "(2) Tartaruga, Jacare e Tubarão.\n"
           "(3) Minhoca, Sapo e Peixe.\n"
           "(4) Golfinho, Barata e Cobra\n"
           "(5) Baleia, Aranha e Peixe.\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 1)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 1");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Oitava Questão
    printf("\n\n\nQUESTAO 8 - Dos exemplos abaixo, qual o unico que nao e um inseto?\n\n");
    printf("(1) Pulga\n"
           "(2) Cupim\n"
           "(3) Percevejo\n"
           "(4) Barata\n"
           "(5) Carrapato\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 5)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 5");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Nona Questão
    printf("\n\n\nQUESTAO 9 - Quais dos seguintes organismos abaixo apresentam um tubo digestorio completo?\n\n");
    printf("(1) Coral, formiga, estrela-do-mar e baleia.\n"
           "(2) Planaria, minhoca, agua-viva e tubarao.\n"
           "(3) Minhoca, barata, polvo e tubarao.\n"
           "(4) Cupim, coral, polvo e baleia.\n"
           "(5) Esponja, barata, polvo e tubarao.\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 3)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 3");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Décima Questão
    printf("\n\n\nQUESTAO 10 - A diminuicao de peso e um fator importante na evolucao das aves. Com ela podem ser relacionadas as seguintes caracteristicas das aves atuais, exceto:\n\n");
    printf("(1) Ausencia de dentes.\n"
           "(2) Corpo coberto de penas.\n"
           "(3) Excretos nitrogenados insoluveis.\n"
           "(4) Ausencia de bexiga urinaria.\n"
           "(5) Presenca de sacos aereos.\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 1)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 1");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Decima-Primeira Questão
    printf("\n\n\nQUESTAO 11 - A moela encontrada nas aves esta relacionada a(ao):\n\n");
    printf("(1) Armazenamento de excretas.\n"
           "(2) Trituracao dos alimentos.\n"
           "(3) Armazenamento de alimento.\n"
           "(4) Digestao das proteinas.\n"
           "(5) Absorcao dos acucares simples.\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 2)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 2");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Decima-Segunda Questão
    printf("\n\n\nQUESTAO 12 - A ausencia de bexiga urinaria e a eliminacao continua de fezes pode ser considerada (em aves) uma adaptacao a(ao):\n\n");
    printf("(1) Postura de ovos\n"
           "(2) Vida arborícola\n"
           "(3) Heterotermia\n"
           "(4) Homeotermia\n"
           "(5) Voo\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 5)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 5");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Décima-Terceira Questão
    printf("\n\n\nQUESTAO 13 -  Qual das estruturas abaixo e encontrada apenas entre os moluscos?\n\n");
    printf("(1) Tubo digestorio completo\n"
           "(2) Sifao exalante\n"
           "(3) Tentaculos\n"
           "(4) Radula\n"
           "(5) Esqueleto calcario\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 4)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 4");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Décima-Quarta Questão
    printf("\n\n\nQUESTAO 14 -  A estrela-do-mar, o jacare, o peixe e o pato podem ser reunidos em um grupo porque apresentam em comum a seguinte caracteristica:\n\n");
    printf("(1) A boca e originada do blastoporo\n"
           "(2) Sao amniotas\n"
           "(3) Sao deuterostomios\n"
           "(4) Sao diblasticos\n"
           "(5) Sao pseudocelomados\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 2)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 2");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    //Décima-Quinta Questão
    printf("\n\n\nQUESTAO 15 -  As celulas de defesa, denominadas cnidoblastos ou cnidocitos, sao observadas nos animais:\n\n");
    printf("(1) Espongiarios\n"
           "(2) Protozoarios\n"
           "(3) Moluscos\n"
           "(4) Equinodermas\n"
           "(5) N.D.A\n\n"
           "Resposta: ");

    do
    {
    scanf("%i", &resp);
    if (resp > 0 && resp <= 5)
    {
    if (resp == 5)
    {
        printf("Correto!");
        ++soma;
    }
    else
    {
        printf("Errado! A resposta correta e 5");
    }
    }
    else
    {
        printf("Essa alternativa nao existe! TENTE NOVAMENTE.\n\nResposta: ");
    }
    }
    while (resp <= 0 ^ resp > 5);

    percentual = (soma*100)/15;

    printf("\n\nParabens! Voce concluiu o Quiz!\n\nDE 15 QUESTOES, VOCE ACERTOU %i! (Aproveitamento de %.1f%%)\n", soma, percentual);

}
