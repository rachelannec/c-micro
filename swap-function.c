#include <stdio.h>

int swap(int *x, int *y) {
	int temp = 0;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("Not swwapped: %d, %d\n", a, b);
	swap(&a, &b);
	printf("Swapped: %d, %d\n", a,b);
}