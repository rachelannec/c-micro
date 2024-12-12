#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if (n > 0 && (n % 2) == 0)
		printf("The number is positive and even.\n");
	else if (n > 0 && (n % 2) == 1)
		printf("The number is positive and odd.\n");
	else if (n < 0 && (n % 2) == 0)
		printf("The number is negative and even.\n");
	else if (n < 0 && (n % 2) == 1)
		printf("The number is negative and odd.\n");
	else 
		printf("The number is zero and even.\n");	
	
	return 0;
}

// this was actually part of our midterm, so shhh hehe
// about the program: takes a number and determine whether positive or negative, as well as if it is even or odd
// 20241203