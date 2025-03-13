// Grp4 and 8  
// Write a function that searches through a 2D array and returns a list of all even 
// numbers. The function should return both the numbers and their corresponding row and 
// column positions.

#include <stdio.h>

#define ROW 3
#define COL 3

void even2d(int arr[ROW][COL]){
	for (int i=0; i<ROW ; i++){
		for (int j=0; j<COL; j++){
			if(arr[i][j] % 2 == 0){
				printf("Element %d at row %d column %d\n", arr[i][j], i+1, j+1);
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
	
	even2d(arr);
	
}