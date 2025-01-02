//PROGRAMMING EXERCISES 6-1
//N factorial can be define as the product of all integer from 1 to N and it is denoted by the
//symbol N!.0! (zero factorial) is defined a 1. Write a program that will input N and would
//call the function factorial that will return N factorial. (Determine first if N is a nonnegative
//integer).

#include <stdio.h>

int factorial(int N) {
	int answer = 1;
	for (int i = 1; i <= N; i++){
		answer = answer * i;
	}
	
	return answer;
}

void result(){
	int N;
	printf("Enter a positive interger (or 0) to find out its factorial: ");
	scanf("%d", &N);
	
	printf("The factorial of %d is %d.", N, factorial(N));
	
}

int main(){
	char choice;
	do {
		result();
		
		printf("\n\nDo you want to try again? (y/n): ");
		scanf(" %c", &choice);
		
		if (choice != 'y' && choice != 'Y') {
			printf("Okay. Goodbye! \n");
		}
	} while (choice == 'y' || choice == 'Y');
	
	
	return 0;
}

// int factorial(int N) <- with that previous declaration, it can't hold larger values - like, accordint to web, the range is about 12! 