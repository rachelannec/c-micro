#include <stdio.h>

int main() {
	int matrix[2][3] = {{1, 4, 2}, 
						{3, 6, 8}};

	// print the 2d array using for-loop
	for(int i=0; i <1; i++){ 								// i < 1, even tho the number of rows is 2
		for(int j=0; j<3;j++){
			int sum = 0;
			int num1, num2;
			num1 = matrix[i][j];
			num2 = matrix[i+1][j];
			sum = num1 + num2;
			printf("%d + %d = %d", num1, num2, sum);
			printf("\n");
		}
	}
	
	return 0;
}