#include <stdio.h>
// #include <cs50.h>

int main(void)
{
    // cash in hand
    int cash;
    // denominationss grr
    int thousand = 0;
    int f_hundred = 0;
    int hundred = 0;
    int fifty = 0;
    int twenty = 0;
    int ten = 0;
    int five = 0;
    int one = 0;


    printf("Cash in hand: ");
    scanf("%d", &cash);


    // total cash hand


    while (cash >= 1000)
    {
        cash = cash - 1000;
        thousand++;
    }

    while (cash >= 500)
    {
        cash = cash - 500;
        f_hundred++;
    }

    while (cash >= 100)
    {
        cash = cash - 100;
        hundred++;
    }

    while (cash >= 100)
    {
        cash = cash - 100;
        hundred++;
    }

    while (cash >= 50)
    {
        cash = cash - 50;
        fifty++;
    }

    while (cash >= 20)
    {
        cash = cash - 20;
        twenty++;
    }

    while (cash >= 10)
    {
        cash = cash - 10;
        ten++;
    }

    while (cash >= 5)
    {
        cash = cash - 5;
        five++;
    }

    while (cash >= 1)
    {
        cash = cash - 1;
        one++;
    }



    // printng the result
    printf("Denominations : 1000 - %d\n", thousand);
    printf("\t 500 - %d\n", f_hundred);
    printf("\t 100 - %d\n", hundred);
    printf("\t 50 - %d\n", fifty);
    printf("\t 20 - %d\n", twenty);
    printf("\t 10 - %d\n", ten);
    printf("\t 5 - %d\n", five);
    printf("\t 1 - %d\n", one);

    return 0;
}
