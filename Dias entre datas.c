#include <stdio.h>

main()
{
    int dia1, dia2, mes1, mes2, ano1, ano2, i;
    long int diastotais = 0;
    long int diastotais1 = 0;
    long int diastotais2 = 0;

    scanf("%i/%i/%i %i/%i/%i", &dia1, &mes1, &ano1, &dia2, &mes2, &ano2);

    if (ano2 > ano1)
    {
        if(ano2 - ano1 >= 2)
        {
            for(i=1; i<=((ano2-1)-ano1); i++)
            {
                if(((ano1+i)%400==0) || ((ano1+i)%4==0 && (ano1+i)%100!=0))
                {
                    diastotais += 366;
                }
                else
                {
                    diastotais += 365;
                }
            }
        }

        if(mes1 <= 12 && mes2 <= 12 && dia1<=31 && dia2<=31)
        {
            if(mes1==12)
                diastotais += (31-dia1);
            else if(mes1==11)
            {
                diastotais += 31;
                diastotais += (30-dia1);
            }
            else if(mes1==10)
            {
                diastotais += 61;
                diastotais += (31-dia1);
            }
            else if(mes1==9)
            {
                diastotais += 92;
                diastotais += (30-dia1);
            }
            else if(mes1==8)
            {
                diastotais += 122;
                diastotais += (31-dia1);
            }
            else if(mes1==7)
            {
                diastotais += 153;
                diastotais += (31-dia1);
            }
            else if(mes1==6)
            {
                diastotais += 184;
                diastotais += (30-dia1);
            }
            else if(mes1==5)
            {
                diastotais += 214;
                diastotais += (31-dia1);
            }
            else if(mes1==4)
            {
                diastotais += 245;
                diastotais += (30-dia1);
            }
            else if(mes1==3)
            {
                diastotais += 275;
                diastotais += (31-dia1);
            }
            else if(mes1==2)
            {
                diastotais += 306;
                if((ano1%400==0) || ((ano1)%4==0 && (ano1)%100!=0))
                {
                    diastotais += (29-dia1);
                }
                else
                {
                    diastotais += (28-dia1);
                }
            }
            else if(mes1==1)
            {
                if((ano1%400==0) || ((ano1)%4==0 && (ano1)%100!=0))
                {
                    diastotais += 335;
                }
                else
                {
                    diastotais += 334;
                }
                diastotais += (31-dia1);
            }

            if(mes2==1)
                diastotais += dia2;
            else if(mes2==2)
            {
                diastotais += 31;
                diastotais += dia2;
            }
            else if(mes2==3)
            {
                if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
                {
                    diastotais += 60;
                }
                else
                {
                    diastotais += 59;
                }
                diastotais += dia2;
            }
            else if(mes2==4)
            {
                if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
                {
                    diastotais += 91;
                }
                else
                {
                    diastotais += 90;
                }
                diastotais += dia2;
            }
            else if(mes2==5)
            {
                if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
                {
                    diastotais += 121;
                }
                else
                {
                    diastotais += 120;
                }
                diastotais += dia2;
            }
            else if(mes2==6)
            {
                if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
                {
                    diastotais += 152;
                }
                else
                {
                    diastotais += 151;
                }
                diastotais += dia2;
            }
            else if(mes2==7)
            {
                if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
                {
                    diastotais += 182;
                }
                else
                {
                    diastotais += 181;
                }
                diastotais += dia2;
            }
            else if(mes2==8)
            {
                if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
                {
                    diastotais += 213;
                }
                else
                {
                    diastotais += 212;
                }
                diastotais += dia2;
            }
            else if(mes2==9)
            {
                if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
                {
                    diastotais += 244;
                }
                else
                {
                    diastotais += 243;
                }
                diastotais += dia2;
            }
            else if(mes2==10)
            {
                if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
                {
                    diastotais += 274;
                }
                else
                {
                    diastotais += 273;
                }
                diastotais += dia2;
            }
            else if(mes2==11)
            {
                if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
                {
                    diastotais += 305;
                }
                else
                {
                    diastotais += 304;
                }
                diastotais += dia2;
            }
            else if(mes2==12)
            {
                if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
                {
                    diastotais += 335;
                }
                else
                {
                    diastotais += 334;
                }
                diastotais += dia2;
            }
        }
    }

    if (ano2 = ano1)
    {
        if(mes1==1)
            diastotais1 += dia2;
        else if(mes1==2)
        {
            diastotais1 += 31;
            diastotais1 += dia2;
        }
        else if(mes1==3)
        {
            if((ano1%400==0) || ((ano1)%4==0 && (ano1)%100!=0))
            {
                diastotais1 += 60;
            }
            else
            {
                diastotais1 += 59;
            }
            diastotais1 += dia2;
        }
        else if(mes1==4)
        {
            if((ano1%400==0) || ((ano1)%4==0 && (ano1)%100!=0))
            {
                diastotais1 += 91;
            }
            else
            {
                diastotais1 += 90;
            }
            diastotais1 += dia2;
        }
        else if(mes1==5)
        {
            if((ano1%400==0) || ((ano1)%4==0 && (ano1)%100!=0))
            {
                diastotais1 += 121;
            }
            else
            {
                diastotais1 += 120;
            }
            diastotais1 += dia2;
        }
        else if(mes1==6)
        {
            if((ano1%400==0) || ((ano1)%4==0 && (ano1)%100!=0))
            {
                diastotais1 += 152;
            }
            else
            {
                diastotais1 += 151;
            }
            diastotais1 += dia2;
        }
        else if(mes1==7)
        {
            if((ano1%400==0) || ((ano1)%4==0 && (ano1)%100!=0))
            {
                diastotais1 += 182;
            }
            else
            {
                diastotais1 += 181;
            }
            diastotais1 += dia2;
        }
        else if(mes1==8)
        {
            if((ano1%400==0) || ((ano1)%4==0 && (ano1)%100!=0))
            {
                diastotais1 += 213;
            }
            else
            {
                diastotais1 += 212;
            }
            diastotais1 += dia2;
        }
        else if(mes1==9)
        {
            if((ano1%400==0) || ((ano1)%4==0 && (ano1)%100!=0))
            {
                diastotais1 += 244;
            }
            else
            {
                diastotais1 += 243;
            }
            diastotais1 += dia2;
        }
        else if(mes1==10)
        {
            if((ano1%400==0) || ((ano1)%4==0 && (ano1)%100!=0))
            {
                diastotais1 += 274;
            }
            else
            {
                diastotais1 += 273;
            }
            diastotais1 += dia2;
        }
        else if(mes1==11)
        {
            if((ano1%400==0) || ((ano1)%4==0 && (ano1)%100!=0))
            {
                diastotais1 += 305;
            }
            else
            {
                diastotais1 += 304;
            }
            diastotais1 += dia2;
        }
        else if(mes1==12)
        {
            if((ano1%400==0) || ((ano1)%4==0 && (ano1)%100!=0))
            {
                diastotais1 += 335;
            }
            else
            {
                diastotais1 += 334;
            }
            diastotais1 += dia2;
        }

        if(mes2==1)
            diastotais2 += dia2;
        else if(mes2==2)
        {
            diastotais2 += 31;
            diastotais2 += dia2;
        }
        else if(mes2==3)
        {
            if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
            {
                diastotais2 += 60;
            }
            else
            {
                diastotais2 += 59;
            }
            diastotais2 += dia2;
        }
        else if(mes2==4)
        {
            if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
            {
                diastotais2 += 91;
            }
            else
            {
                diastotais2 += 90;
            }
            diastotais2 += dia2;
        }
        else if(mes2==5)
        {
            if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
            {
                diastotais2 += 121;
            }
            else
            {
                diastotais2 += 120;
            }
            diastotais2 += dia2;
        }
        else if(mes2==6)
        {
            if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
            {
                diastotais2 += 152;
            }
            else
            {
                diastotais2 += 151;
            }
            diastotais2 += dia2;
        }
        else if(mes2==7)
        {
            if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
            {
                diastotais2 += 182;
            }
            else
            {
                diastotais2 += 181;
            }
            diastotais2 += dia2;
        }
        else if(mes2==8)
        {
            if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
            {
                diastotais2 += 213;
            }
            else
            {
                diastotais2 += 212;
            }
            diastotais2 += dia2;
        }
        else if(mes2==9)
        {
            if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
            {
                diastotais2 += 244;
            }
            else
            {
                diastotais2 += 243;
            }
            diastotais2 += dia2;
        }
        else if(mes2==10)
        {
            if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
            {
                diastotais2 += 274;
            }
            else
            {
                diastotais2 += 273;
            }
            diastotais2 += dia2;
        }
        else if(mes2==11)
        {
            if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
            {
                diastotais2 += 305;
            }
            else
            {
                diastotais2 += 304;
            }
            diastotais2 += dia2;
        }
        else if(mes2==12)
        {
            if((ano2%400==0) || ((ano2)%4==0 && (ano2)%100!=0))
            {
                diastotais2 += 335;
            }
            else
            {
                diastotais2 += 334;
            }
            diastotais2 += dia2;
        }
        diastotais += (diastotais2)-(diastotais1);
    }

    printf("%i", diastotais);
}
