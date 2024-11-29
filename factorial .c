 // this code will output the factorial of your positive integer input
// input: 5
// output: 120 (something like that)

#include <stdio.h>

int main()
{
	int n;
	int answer = 1;
	printf("Enter a positive interger (or 0) to find put its factorial: ");
	scanf("%d", &n);
	
	if(n < 0)
	{
		printf("Invalid. Not a positive integer.");
		return 0;
	}
	
	for(int i = 1; i <= n; i++)
	{
		answer = answer * i;
	}
	
	printf("The factorial is %d", answer);
}