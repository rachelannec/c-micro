#include <stdio.h>

int main()
{
//	so ganito nga dapat yon, like remainder things siya  ;-; hehe 
//  bat mo kasi ginamitan ng while loop nung una? eme
//  20241113
	int cash, thousand, f_hundred, hundred, fifty, twenty, ten, five, one = 0;
	
	
    printf("Cash on hand : ");
    scanf("%d", &cash);

    thousand = cash / 1000;
    f_hundred = (cash % 1000) / 500;
    hundred = ((cash % 1000) % 500) / 100;
    fifty = (((cash % 1000) % 500) % 100) / 50;
    twenty = ((((cash % 1000) % 500) % 100) % 50) / 20;
    ten = (((((cash % 1000) % 500) % 100) % 50) % 20) / 10;
    five = ((((((cash % 1000) % 500) % 100) % 50) %20) %10) / 5;
    one =  (((((((cash % 1000) % 500) % 100) % 50) %20) %10) % 5) / 1;
                 
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