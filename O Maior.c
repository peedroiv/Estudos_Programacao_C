#include<stdio.h>

main()
{
    float salario, salarionovo;

    scanf("%f", &salario);

    if(salario>500)
    {
        salarionovo = salario+(salario*0.1);
    }
    else if(salario>300)
    {
        salarionovo = salario+(salario*0.07);
    }
    else
    {
        salarionovo = salario+(salario*0.05);
    }

    printf("%0.2f", salarionovo);
}
