#include <stdio.h>
int row, column = 0;

void linear_search(int arr[row][column], int r, int c, int x){
	for (int i = 0;i < r;i++){
		for (int j = 0;j < c;j++){
			if (arr[i][j] == x){
			printf("The position of %d in the array is in Row %d Column %d. \nOr index[%d][%d]", x, i+1, j+1,i,j);
		}
		}
	}
	
	return -1; // not found
}

int main(){
	
	// ask for number of rows and column
	printf("Enter the number of rows: ");
	scanf("%d", &row);
	printf("Enter the number of columns: ");
	scanf("%d", &column);
	
	int arr[row][column];
	
	// inputting values to the 2d array
	for(int i=0; i < row; i++){
		for(int j=0; j < column; j++){
			printf("Row %d Column %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	
	// printing the values
	for(int i=0; i < row; i++){
		printf("| ");
		for(int j=0; j < column;j++){
			printf("%d | ", arr[i][j]);
		}
		printf("\n");
	}
	
	// finding the size of the array
	// int size = sizeof(arr) / sizeof(arr[0][2]);
	
	// unsing linear search
	int target = 12;
	linear_search(arr, row, column, target);
	printf("\n");
	
	
	
	
}