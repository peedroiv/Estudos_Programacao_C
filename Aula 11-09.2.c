#include <stdio.h>

main()
{
    int a = 1;
    int b = 2;

    int *pt_a;

    pt_a = &a;
    *pt_a = 50;

    printf("a = %d\nendereco de a = %p", a, &a);
}
