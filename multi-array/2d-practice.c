#include <stdio.h>

int main() {
	int matrix[2][3] = {{1, 4, 2}, 
						{3, 6, 8}};

	// print the 2d array using for-loop
	for(int i=0; i <2; i++){
		printf("| ");
		for(int j=0; j<3;j++){
			printf("%d | ", matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

