#include <stdio.h>

main()
{

    int n, x2, x3, x4, x5, x6, x7, x8, x9;

    scanf("%d", &n);

    x2 = (n) + (n);
    x3 = (n) + (x2);
    x4 = (n) + (x3);
    x5 = (n) + (x4);
    x6 = (n) + (x5);
    x7 = (n) + (x6);
    x8 = (n) + (x7);
    x9 = (n) + (x8);

    printf("%d X 1 = %d\n%d X 2 = %d\n%d X 3 = %d\n%d X 4 = %d\n%d X 5 = %d\n%d X 6 = %d\n%d X 7 = %d\n%d X 8 = %d\n%d X 9 = %d", n, n, n, x2, n, x3, n, x4, n, x5, n, x6, n, x7, n, x8, n, x9);

}
