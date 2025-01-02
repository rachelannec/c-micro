#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

float divide(int x, int y) {
	return (float)x / y;
}

void results() {
	int x, y;
	printf("Enter value for x and y (separeted by space): ");
	scanf("%d %d", &x, &y);
	
	int sum = add(x, y);
	int difference = subtract(x, y);
	int product = multiply(x,y);
	float quotient = divide(x, y);
	
	printf("The sum of %d and %d is %d. \n", x, y, sum);
	printf("The difference of %d and %d is %d. \n", x, y, difference);
	printf("The product of %d and %d is %d. \n", x, y, product);
	
	// for division, it'll be a little different
	if (y != 0){
		printf("The quotient of %d and %d is %.2f. \n", x, y, quotient);
	} else {
		printf("The quotient is undefined. \n");
	}
}

int main() {
	char choice; // for if ever the user want to try again
	
	do {
		results();
		
		printf("\nDo you want to try again? (y/n): ");
		scanf(" %c", &choice);
		
		if (choice != 'y' && choice != 'Y') {
			printf("Okay. Goodbye! \n");
		}
	} while (choice == 'y' || choice == 'Y');
	
	
	return 0;
	
}