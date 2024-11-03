#include <stdio.h>

int main()
{
	// get hours worked --> hour rate, gross pay, withholding tax, net pay
	
	int h_worked = 0;
	int h_rate = 281; // contant pala 'tong h_rate, d4mn
	int g_pay, w_tax, n_pay;
	
	
	printf("Enter hours worked: ");
	scanf("%d", &h_worked);
	
	
	g_pay = h_rate * h_worked;
	w_tax = g_pay * 0.32;
	n_pay = g_pay - w_tax;
	
	printf("Hourly rate: \t %d \n", h_rate);
	printf("Hours worked: \t %d \n", h_worked);
	printf("Gross pay: \t %d \n", g_pay);
	printf("Withholding tax: %d \n", w_tax);
	printf("Net pay: \t %d \n", n_pay);
		
	return 0;
}
