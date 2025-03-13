#include <stdio.h>

#define ROW 2
#define COL 5

void binary(int arr[ROW][COL], int target){
	int i = 0, j = COL - 1;
	
	while(i < ROW && j >= 0){
		if (arr[i][j] == target){
			printf("element %d is in position (%d, %d).", target, i,j);
			return;
		} else if(arr[i][j] > target){
			j--;
		} else {
			i++;
		}
	}
	printf("Element %d not found.", target);
}

int main(){
	int arr[ROW][COL] = {
		{1,2,3,4,5},
		{6,7,8,9,10}
	};
	
	printf("Here's the original array for reference.\n");
	// printing the array first
	for (int i=0; i< ROW; i++){
		for (int j=0; j<COL; j++){
			printf("%d ", arr[i][j]);
		}   
		printf("\n");
	}
	
	int n;
	printf("\nEnter the integer: ");
	scanf("%d", &n);
	
	binary(arr, n);
}