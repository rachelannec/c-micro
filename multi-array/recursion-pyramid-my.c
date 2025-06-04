#include <stdio.h>

void pyramid(int n, int current_row) {
	// sentinel for the recursion - base case
	if (current_row > n){
		return; // just return cause the function return type in void
	}
	
	for(int i = 0; i < n - current_row; i++){
		printf(" ");
	}
	
	for (int j = 0; j < 2*current_row-1; j++){
		printf("*");
	}
	
	printf("\n");
	
	// recursion call
	pyramid(n, current_row + 1);
}

int main() {
	int height = 4;
	//	printf("Enter the height of the pyramid: ");
	//	scanf("%d", &height);
	//	printf("Pyramid with a height of 4\n");

	// function call
	pyramid(height, 1);
}

