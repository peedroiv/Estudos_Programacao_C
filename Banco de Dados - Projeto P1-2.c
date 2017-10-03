#include <stdio.h>
float horaextra(int horas, float valor) //Função para calcular hora extra
{
    return horas*valor;
}
float salariobruto(float grat, float sala, float medico, float hextra, float vtrans) //Função pra calcular salario bruto
{
    return grat+sala+medico+hextra+vtrans;
}
float fgts(float sal) //Função pra calcular FGTS
{
    return ((sal*8)/100);
}
main()
{
    //ENTRADA
    int n, i, j, k, h;
    printf("DIGITE QUANTOS FUNCIONARIOS DESEJA CADASTRAR:\n");
    scanf("%d", &n);
    float salariobase[n], vale[n], svale=0, vhextra[n], shextra=0, auxmedico[n], smedico=0, grati[n], sgrati=0, total=0, aux, aux1, aux2, sfgts=0;
    int matricula[n], nhextra[n];
    char nome[n][50], setor [n][50];
    for(j=0; j<n; j++)
    {
        i=j+1;

        int matriculaigual = 0;

        while(matriculaigual == 0)
        {
            printf("\nDIGITE O NUMERO DE MATRICULA DO FUNCIONARIO %d:\n", i);
            scanf("%d", &matricula[j]);

            //Mecanismo para verificar se há uma matrícula igual já cadastrada
            //Enquanto for verificado que há uma matrícula repetida ele repetirá, pedindo para redigitar a matrícula
            if(j==0)
            {
                matriculaigual++;
            }
            else
            {
                for(h=0; h<j; h++)
                {
                    if(matricula[j] == matricula[h])
                    {
                        printf("ESTE NUMERO DE MATRICULA JA FOI CADASTRADO! POR FAVOR REPITA!\n");
                        matriculaigual = 0;
                        break;
                    }
                    else
                    {
                        matriculaigual++;
                    }
                }
            }
        }

        printf("DIGITE O NOME DO FUNCIONARIO %d:\n", i);
        getchar();
        gets(nome[j]);
        printf("DIGITE O SETOR DE LOTACAO DO FUNCIONARIO %d:\n", i);
        gets(setor[j]);
        printf("DIGITE O SALARIO BASE DO FUNCIONARIO %d:\n", i);
        scanf("%f", &salariobase[j]);
        printf("DIGITE O VALOR DO VALE-TRANSPORTE DO FUNCIONARIO %d:\n", i);
        scanf("%f", &vale[j]);
        svale= svale + vale[j]; //Soma para calcular no fim, a despesa total com vale transporte
        printf("DIGITE A QUANTIDADE DE HORAS EXTRAS REALIZADAS PELO FUNCIONARIO %d NO MES:\n", i);
        scanf("%d", &nhextra[j]);
        printf("DIGITE O VALOR DAS HORAS EXTRAS REALIZADAS PELO FUNCIONARIO %d:\n", i);
        scanf("%f", &vhextra[j]);
        printf("DIGITE O VALOR DO AUXILIO-SAUDE RECEBIDO PELO FUNCIONARIO %d:\n", i);
        scanf("%f", &auxmedico[j]);
        smedico = smedico + auxmedico[j]; //Soma para calcular no fim, a despesa total com auxílio-saúde
        printf("DIGITE O VALOR DA GRATIFICACAO RECEBIDA PELO FUNCIONARIO %d:\n", i);
        scanf("%f", &grati[j]);
        sgrati = sgrati + grati [j]; //Soma para calcular no fim, a despesa total com gratificações
        printf("\n");
    }

    printf("-----------------------------------------------------------\n");

    for(j=0; j<n; j++)
    {
        k=j+1;
        printf("\nDESPESA COM O FUNCIONARIO: %s\n", nome[j]);
        printf("MATRICULA: %d\n", matricula[j]);
        printf("LOTADO EM: %s\n", setor[j]);
        aux = horaextra(nhextra[j],vhextra[j]);
        shextra = shextra + aux; //Soma para calcular no fim, a despesa total com hora-extra
        printf("HORA EXTRA: R$ %.2f\n", aux);
        aux1 = salariobruto(grati[j],salariobase[j],auxmedico[j], aux, vale[j]);
        printf("SALARIO BRUTO: R$ %.2f\n", aux1);
        aux2 = fgts(salariobase[j]);
        sfgts = sfgts + aux2; //Soma para calcular no fim, a despesa total com FGTS
        printf("FGTS: R$ %.2f\n", aux2);
        printf("DESPESA TOTAL COM O FUNCIONARIO: R$ %.2f\n\n", aux1+aux2);
        total = total + (aux1+aux2);
    }

    printf("\nDESPESA TOTAL COM HORA-EXTRA: R$ %.2f\n", shextra);
    printf("DESPESA TOTAL COM VALE-TRANSPORTE: R$ %.2f\n", svale);
    printf("DESPESA TOTAL COM AUXILIO-SAUDE: R$ %.2f\n", smedico);
    printf("DESPESA TOTAL COM GRATIFICACOES: R$ %.2f\n", sgrati);
    printf("DESPESA TOTAL COM FGTS: R$ %.2f\n\n", sfgts);
    printf("DESPESA TOTAL: R$ %.2f\n", total+sfgts);

    return 0;
}
