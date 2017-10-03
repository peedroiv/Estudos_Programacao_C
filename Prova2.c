#include <stdio.h>

main()
{
    int contador, n, altura=0, distancia=0, direcao=0;
    char comando;

    scanf("%i", &n);

    for(contador=1; contador<=n; contador++)
    {
        if(comando == 'V')
        {
        	//Se direcao = 0, O balão está indo para frente.
        	//Se direcao = 1, O balão está voltando.
            if(direcao=0)
            {
                direcao = 1;
            }
            else if(direcao=1)
            {
                direcao = 0;
            }
        }

        scanf("%s", &comando);

        if(comando == 'S')
        {
            altura+=10;
        }

        else if(altura>0)
        {
            if(comando == 'D')
            {
                altura-=10;
            }
            else if(comando == 'F')
            {
            	if(direcao = 0)
            	{
                distancia+=10;
            	}
            	else if(direcao = 1)
            	{
                distancia-=10;
            	}
            }
            else if(comando == 'V')
            {
                if(direcao = 0)
            	{
                distancia+=10;
            	}
            	else if(direcao = 1)
            	{
                distancia-=10;
            	}
			}

			if(altura>200)
			{
				altura = 200;
			}
			else if(altura<0)
			{
				altura = 0;
			}

			if(distancia>2000)
			{
				distancia = 2000;
			}
			else if(distancia<0)
			{
				distancia = 0;
			}
		}
	}

	printf("%i %i\n", altura, distancia);
}

