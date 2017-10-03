#include <stdio.h>

main()
{
    int dia, mes, ano;

    scanf("%d", &dia);

    ano = dia/365;

    mes = (dia%365)/30;

    dia = dia - (mes*30) - (ano*365);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)", ano, mes, dia);
}
