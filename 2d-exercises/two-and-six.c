// Grp2 and 6 
// Write a function that searches for the maximum value in a 2D array and returns its
// position (row and column) as well as the value itself.

#include <stdio.h>

#define ROW 3
#define COL 3

void max2d(int arr[ROW][COL]){
	int currMaxI = 0, currMaxJ=0;
	for(int i=0; i < ROW ; i++){
		
		for (int j=0; j< COL; j++){
			
			if (arr[i][j] > arr[currMaxI][currMaxJ]){
				currMaxI = i;
				currMaxJ = j;
			}
		}
	}
	printf("The maximum element %d is in position (%d, %d), or ROW %d COL %d.", arr[currMaxI][currMaxJ], currMaxI, currMaxJ, currMaxI+1, currMaxJ+1);
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
		{1,400,8}
	};
	printArr(arr);
	printf("\n");
	max2d(arr);
	
	
	
}