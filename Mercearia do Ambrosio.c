#include <stdio.h>

main(void)
{

    int cod, quant;
    float desconto, total;

    scanf("%i %i", &cod, &quant);

    if (cod == 1){
        total = (quant)*5.30;
        if (quant >= 15 || total >= 40){
            desconto = (total/100)*15;
            total -= desconto;
        }
    }
    else if (cod == 2){
        total = (quant)*6.00;
        if (quant >= 15 || total >= 40){
            desconto = (total/100)*15;
            total -= desconto;
        }
    }
    else if (cod == 3){
        total = (quant)*3.20;
        if (quant >= 15 || total >= 40){
            desconto = (total/100)*15;
            total -= desconto;
        }
    }
    else if (cod == 4){
        total = (quant)*2.50;
        if (quant >= 15 || total >= 40){
            desconto = (total/100)*15;
            total -= desconto;
        }
    }
    printf("R$ %0.2f\n", total);
}
