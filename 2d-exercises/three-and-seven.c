// Grp3 and 7 Write a function that finds all elements in a 2D array where the number is divisible 
// by 3. Return the numbers and their positions in the format: (value, row, column).

#include <stdio.h>

#define ROW 3
#define COL 3

void divisibleByThree(int arr[ROW][COL]){
	printf("\nFORMAT: (VAL, ROW, COL)\n");
	for (int i=0; i< ROW; i++){
		for (int j=0; j<COL ; j++){
			if (arr[i][j] % 3 == 0){
				printf("(%d, %d, %d)\n", arr[i][j], i+1, j+1);
			}
		}
	}
}

void printArr(int arr[ROW][COL]){
	for(int i=0; i<ROW; i++){
		for (int j=0; j<COL; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int arr[ROW][COL] = {
		{2,3,5},
		{9,6,7},
		{1,4,8}
	};
	printArr(arr);
	
	divisibleByThree(arr);
	
}