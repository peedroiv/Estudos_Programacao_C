#include <stdio.h>

main()
{
	int n;
	scanf("%d", &n);


	int vetor[n];
	int i, ii;
	void troca(int *depois, int *antes);

	for(i=0; i<n; i++)
	{
		scanf("%d", &vetor[i]);
	}

	for(i=n-1; i>=0; i--)
	{
		for(ii=i-1; ii>=0; ii--)
		{
			troca(&vetor[i], &vetor[ii]);
		}
	}

	for(i=0; i<n; i++)
	{
		printf("[%d]", vetor[i]);
	}
}

void troca(int *depois, int *antes)
{
	int aux;

	if(*depois < *antes)
	{
		aux = *depois;
		*depois = *antes;
		*antes = aux;
	}
}
