#include <stdio.h>

main()
{
	int linhaG, i, j;
	float soma=0, media;
	char operacaoT;
	float matriz[12][12];

	scanf("%d", &linhaG);
	getchar();
	scanf("%c", &operacaoT);

	//Leitura dos elementos da matriz
	for(i=0; i<12; i++)
	{
		for(j=0; j<12; j++)
		{
			scanf("%f", &matriz[i][j]);
		}
	}

	//Definição da Soma.
	for(j=0; j<12; j++)
	{
		soma += matriz[linhaG][j];
	}

	if(operacaoT == 'S') //Se o Caracter for 'S', Imprime a Soma.
	{
		printf("%.1f\n", soma);
	}
	else if(operacaoT == 'M') //Se o Caracter for 'M', Calcula a Média e Imprime.
	{
		media = soma/12;
		printf("%.1f\n", media);
	}
}
