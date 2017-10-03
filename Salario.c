#include <stdio.h>

main()
{
    int num, horas;
    float valorph, salario;

    scanf("%i %i %f", &num, &horas, &valorph);

    salario = (horas*valorph);

    printf("NUMBER = %i\nSALARY = R$ %.2f", num, salario);
}
