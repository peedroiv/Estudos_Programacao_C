#include <stdio.h>

main ()
{

    float tf, tc1, tc2;

    scanf("%f", &tf);

    tc1 = (tf-32) * 5;

    tc2 = (tc1) / 9;

    printf("%0.2f\n", tc2);

}
