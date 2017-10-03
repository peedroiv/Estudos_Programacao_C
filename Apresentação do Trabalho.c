#include <stdio.h>

main()
{
    int intergraf, intelartf, encaps, identacao, structs;

	/*
	intergraf = Inferface Gráfica
	intelartf =	Inteligência Artificial
	encaps = Encapsulamento
	identacao = Indentação
	structs = Uso de Structs
	*/

    scanf("%i %i %i %i %i", &intergraf, &intelartf, &encaps, &identacao, &structs);

	//Verificação de Requisitos
    if(intergraf == 1 || intelartf ==1)
    {
        if(encaps == 1 && identacao == 1)
        {
            if(structs == 1)
            {
                printf("AVALIADO\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else
        {
            printf("0\n");
        }
    }
    else
    {
        printf("0\n");
    }
}
