#include <stdio.h>

main(void)
{

    int l1, l2, l3;

    scanf("%i %i %i", &l1, &l2, &l3);

    if (l1 != l2 && l3 != l1 && l2 != l3)
        printf("2");

    if (l1 == l2 && l3 == l1 && l2 == l3)
        printf("1" );

    if (l1 != l2 && l3 == l1 && l2 != l3)
        printf("3");

    if (l1 == l2 && l3 != l1 && l2 != l3)
        printf("3");

    if (l1 != l2 && l3 != l1 && l2 == l3)
        printf("3");


}
