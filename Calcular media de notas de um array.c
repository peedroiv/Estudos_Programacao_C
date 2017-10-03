#include <stdio.h>

int main(void){

    float notas[5] = {0};
    float total = 0;
    float media = 0;
    int i;

    for (i = 0; i < 5; ++i)
        scanf("%f", &notas[i]);

    for (i = 0; i < 5; ++i)
        total += notas[i];

    media = total / 5;

    printf("%f", media);

    return 0;
}
