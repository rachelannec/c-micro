// Grp1 and 5 
// Write a function that searches for a specific value along the diagonal of a square 2D
// array (where the number of rows equals the number of columns). If the element is found,
// return its position; otherwise, return "Element not found on the diagonal."
// the diagonal was arr[i][i] - if ganyan nga sana ??


#include <stdio.h>

#define ROW 3
#define COL 3

//static result[80];

void diagonal(int arr[ROW][COL], int value){
	int found = 0;
	for (int i =0; i< ROW; i++){
		if(arr[i][i] == value){
			printf("\nElement %d found at position (%d, %d).", value, i, i);
			found = 1;
		} 
		
		// anti diagonal
		if(arr[ROW - i - 1][i] == value){
			printf("\nElement %d found at position (%d, %d).", value, ROW-i-1, i);
			found = 1;
		}
	}
	
	if (!found){
		printf("\nElement not found in the diagonal.");
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
	printf("\n");
	
	int n;
	printf("Enter integer to see if it is on diagonal: ");
	scanf("%d", &n);
	diagonal(arr, n);
	
	
}

