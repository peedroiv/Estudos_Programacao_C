#include <stdio.h>
#include <math.h>

main()
{

    float a, b, c, delta, x1, x2;

    scanf("%f %f %f", &a, &b, &c);

    delta = (b*b) - (4*a*c);

    if (a !=0)
        if (delta >= 0)
            x1 = (-b + sqrt(delta)) / (2*a),
            x2 = (-b - sqrt(delta)) / (2*a),
            printf("%0.2f %0.2f", x1, x2);
        else
            printf("NRR");
    else
        printf("NEESG");

}
