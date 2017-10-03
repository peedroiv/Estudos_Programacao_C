#include <stdio.h>

int main(void)
{

    int n;

    scanf("%i", &n);

    int elem[10000] = {0};
    int total = 0;
    int i;

    for (i = 0; i < n; ++i)
        scanf("%i", &elem[i]);

    for (i = 0; i < n; ++i)
        total += elem[i];

    printf("%i\n", total);

    return 0;
}
