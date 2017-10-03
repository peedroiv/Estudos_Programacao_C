#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
	int numFrases, cont, tamanhoFrase, i;
	char frase[300];

	scanf("%d", &numFrases);
	getchar();

	for(cont=0; cont<numFrases; cont++)
	{
		gets(frase); //Receber String.

		tamanhoFrase = strlen(frase); //Calcular o Tamanho da String.

		//Troca da Letra Minuscula pela Maiuscula se ela for a letra inicial da string ou vier depois de um Ponto Final.
		for(i=0; i<tamanhoFrase; i++)
		{
			if(i == 0)
			{
				frase[i] = toupper(frase[i]);
			}
			else if(frase[i] == 46)
			{
				frase[i+2] = toupper(frase[i+2]);
			}
		}

		printf("%s\n", frase); //Imprimir String.
	}
}
