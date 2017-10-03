#include <stdio.h>

main()
{
	int altura, idade, contador=0;

	scanf("%i %i", &altura, &idade);

	//Barca Viking
	if(altura >= 150 && idade >= 12)
	{
		contador++;
	}

	//Elevator of Death
	if(altura >= 140 && idade >= 14)
	{
		contador++;
	}

	//Final Killer
	if (altura >= 170 || idade >= 16)
	{
		contador++;
	}

	printf("%i\n", contador);
}
