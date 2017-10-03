#include <stdio.h>
float horaextra(int horas, float valor) // função para calcular hora extra
{
    return horas*valor;

}
float salariobruto(float grat, float sala, float medico, float hextra, float vtrans) //função pra calcular salario bruto
{
    return grat+sala+medico+hextra+vtrans;
}
float fgts(float sal) //função pra calcular fgts
{
    return ((sal*8)/100);
}
main()
{
    //ENTRADA
    int n,i, j,k;
    printf("\tDIGITE QUANTOS FUNCIONÁRIOS DESEJA CADASTRAR\n");
    scanf("%d", &n);
    float salariobase[n],vale[n], svale=0,vhextra[n],shextra=0, auxmedico[n],smedico=0, grati[n],sgrati=0,total=0,aux,aux1,aux2,sfgts=0;
    int matricula[n], nhextra[n] ;
    char nome[n][50], setor [n][50];
    for(j=0;j<n;j++)
    {
        i=j+1;
        printf("DIGITE O NÚMERO DE MATRÍCULA DO FUNCIONÁRIO %d\n", i);
        scanf("%d", &matricula[j]);
        printf("DIGITE O NOME DO FUNCIONÁRIO %d\n", i);
        getchar();
        scanf("%s", &nome[j]);
        printf("DIGITE O SETOR DE LOTAÇÃO DO FUNIONÁRIO %d\n", i);
        getchar();
        scanf("%s", &setor[j]);
        printf("DIGITE O SALÁRIO BASE DO FUNIONÁRIO %d\n", i);
        scanf("%f", &salariobase[j]);
        printf("DIGITE O VALOR DO VALE-TRANSPORTE DO FUNIONÁRIO %d\n", i);
        scanf("%f", &vale[j]);
        svale= svale +vale[j];
        printf("DIGITE A QUANTIDADE DE HORAS EXTRAS REALIZADAS PELO FUNIONÁRIO %d\n", i);
        scanf("%d", &nhextra[j]);
        printf("DIGITE O VALOR DAS HORAS EXTRAS REALIZADAS PELO FUNIONÁRIO %d\n", i);
        scanf("%f", &vhextra[j]);
        printf("DIGITE O VALOR DO AUXÍLIO-SAÚDE RECEBIDO PELO FUNIONÁRIO %d\n", i);
        scanf("%f", &auxmedico[j]);
        smedico = smedico + auxmedico[j];
        printf("DIGITE O VALOR DA GRATIFICAÇÃO RECEBIDA PELO FUNIONÁRIO %d\n", i);
        scanf("%f", &grati[j]);
        sgrati = sgrati + grati [j];
        printf("\n");
    }
    for(j=0;j<n;j++)
    {
        k=j+1;
        printf("\tDESPESA COM O FUNCIONÁRIO %s MATRÍCULA %d LOTADO NO(A) %s\n\n", nome[j], matricula[j], setor[j]);
        aux=horaextra(nhextra[j],vhextra[j]);
        shextra = shextra +aux;
        printf("HORA EXTRA R$ %.2f\n", aux);
        aux1= salariobruto(grati[j],salariobase[j],auxmedico[j], aux, vale[j]);
        printf("SALÁRIO BRUTO R$ %.2f\n", aux1);
        aux2=fgts(salariobase[j]);
        sfgts=sfgts+ aux2;
        printf("FGTS R$ %.2f\n", aux2);
        printf("DESPESA TOTAL COM O FUNCIONÁRIO R$ %.2f\n", aux1+aux2);
        total= total + (aux1+aux2);
    }
    printf("\tDESPESA TOTAL\n");
    printf("DESPESA TOTAL COM HORA-EXTRA R$ %.2f\n", shextra);
    printf("DESPESA TOTAL COM VALE-TRANSPORTE R$ %.2f\n", svale);
    printf("DESPESA TOTAL COM AUXÍLIO-SAÚDE R$ %.2f\n", smedico);
    printf("DESPESA TOTAL COM GRATIFICAÇÕES R$ %.2f\n", sgrati);
    printf("DESPESA TOTAL COM FGTS R$ %2.f\n\n", sfgts);
    printf("\tDESPESA TOTAL R$ %.2f\n", total +sfgts);



return 0;
}
