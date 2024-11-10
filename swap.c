
//20241110
//Input: Enter Value of x: 5
//Enter Value of y: 10
//Output: After Swapping: x = 10, y = 5


#include <stdio.h>

int main()
{
	int x, y;
	int temp;
	printf("enter x: ");
	scanf("%d", &x);
	
	printf("enter y: ");
	scanf("%d", &y);
	
	temp = x;
	x = y;
	y = temp;
	
	printf("x is now %d, and y is now %d", x, y);
	
	return 0;
}