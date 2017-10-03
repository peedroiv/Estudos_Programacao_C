#include <stdio.h>

struct bancodedados //Declaração da Struct
{
    int idade;
    char nome[50];
    char sexo;
    char estCivil;
    int numAmigos;
    int numFotos;
};

main()
{
	int numUsuarios, cont;

	scanf("%d", &numUsuarios); //Receber a Quantidade de Usuários.

	struct bancodedados usuario[numUsuarios];

	for(cont=0; cont<numUsuarios; cont++) //Receber os dados.
	{
		scanf("%d", &usuario[cont].idade);
		getchar();
		gets(usuario[cont].nome);
		scanf("%c", &usuario[cont].sexo);
		getchar();
		scanf("%c", &usuario[cont].estCivil);
		scanf("%d%d", &usuario[cont].numAmigos, &usuario[cont].numFotos);
	}

	for(cont=0; cont<numUsuarios; cont++) //Imprimir formatado.
	{
		printf("Idade: %d\n", usuario[cont].idade);
		printf("Nome: %s\n", usuario[cont].nome);
		printf("Sexo: %c\n", usuario[cont].sexo);
		printf("Estado Civil: %c\n", usuario[cont].estCivil);
		printf("Numero de amigos: %d\nNumero de fotos: %d\n\n", usuario[cont].numAmigos, usuario[cont].numFotos);
	}
}
