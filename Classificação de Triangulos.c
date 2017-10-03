#include <stdio.h>

main(void)
{

    float l1, l2, l3;

    scanf("%f %f %f", &l1, &l2, &l3);

    if (l1 != l2 && l3 != l1 && l2 != l3)
        printf("escaleno");

    if (l1 == l2 && l3 == l1 && l2 == l3)
        printf("equilatero" );

    if (l1 != l2 && l3 == l1 && l2 != l3)
        printf("isosceles");

    if (l1 == l2 && l3 != l1 && l2 != l3)
        printf("isosceles");

    if (l1 != l2 && l3 != l1 && l2 == l3)
        printf("isosceles");


}
