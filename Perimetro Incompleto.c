#include <stdio.h>
#include <math.h>

main(void)
{

	int nlados;
	float r, lado, perimetro, diagonal;

	scanf("%i %f", &nlados, &r);


	if (nlados = 4){
		lado = (2*r) / (sqrt(2));
		perimetro = lado*nlados;
		printf("%0.2f", perimetro);
	}

}
