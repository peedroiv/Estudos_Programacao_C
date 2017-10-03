#include <stdio.h>

main()
{

    float n1, n2, n3, media;

    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1+n2+n3) / 3;

    if (media >= 7)
        printf("aprovado\n");

    if (media < 3)
        printf("reprovado\n");

    if (media >= 3 && media < 7)
        printf("prova final\n");
}
