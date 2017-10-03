#include <stdio.h>

main(void)
{
    float inv, juros, rendimento, i;
    int tempo;

    scanf("%f %f %i", &inv, &juros, &tempo);

    tempo*=4;

    for(i=1; i<=tempo; i++)
    {
        rendimento = (inv*juros);
        inv+=rendimento;
        printf("Rendimento: %.2f Montante: %.2f\n", rendimento, inv);
    }
}
