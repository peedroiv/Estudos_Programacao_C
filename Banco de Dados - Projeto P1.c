#include <stdio.h>

main()
{
    //ENTRADA
    int n,i, j;
    printf("DIGITE QUANTOS FUNCIONARIOS DESEJA CADASTRAR\n");
    scanf("%d", &n);
    float salariobase[n],vale[n],vhextra[n], auxmedico[n], grati[n];
    int matricula[n], nhextra[n] ;
    char nome[n][50], setor [n][50];
    for(j=0;j<n;j++)
    {
        i=j+1;
        printf("\nDIGITE O NUMERO DE MATRICULA DO FUNCIONARIO %d\n", i);
        scanf("%d", &matricula[i]);
        printf("DIGITE O NOME DO FUNCIONARIO %d\n", i);
        getchar();
        gets(nome[i]);
        printf("DIGITE O SETOR DE LOTACAO DO FUNIONARIO %d\n", i);
        getchar();
        gets(setor[i]);
        printf("DIGITE O SALARIO BASE DO FUNIONARIO %d\n", i);
        scanf("%f", &salariobase[i]);
        printf("DIGITE O VALOR DO VALE-TRANSPORTE DO FUNIONARIO %d\n", i);
        scanf("%f", &salariobase[i]);
        printf("DIGITE A QUANTIDADE DE HORAS EXTRAS REALIZADAS PELO FUNIONARIO %d\n", i);
        scanf("%d", &nhextra[i]);
        printf("DIGITE O VALOR DAS HORAS EXTRAS REALIZADAS PELO FUNIONARIO %d\n", i);
        scanf("%f", &vhextra[i]);
        printf("\n");


    }
    for(i=0;i<n;i++)
    {



    }
return 0;
}
