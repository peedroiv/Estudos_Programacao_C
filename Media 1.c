#include <stdio.h>

main()
{
    double A, B, MEDIA;

    scanf("%lf %lf", &A, &B);

    A = A*3.5;
    B = B*7.5;

    MEDIA = (A+B)/11;

    printf("MEDIA = %.5lf\n", MEDIA);
}
