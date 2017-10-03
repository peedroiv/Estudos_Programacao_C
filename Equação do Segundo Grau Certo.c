#include <stdio.h>
#include <math.h>

void main()
{

    float a, b, c, delta, x1, x2;

    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
        printf("NEESG");
    else{
    	delta = (b*b) - (4*a*c);
    	if (delta < -0.000001)
            printf("NRR");
        else{
            x1 = (-b + sqrt(fabs(delta))) / (2*a);
            x2 = (-b - sqrt(fabs(delta))) / (2*a);
            printf("%0.2f\n%0.2f", x1, x2);
        }
    }

}
