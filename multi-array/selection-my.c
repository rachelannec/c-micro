#include <stdio.h>

int main() {
	int arr[] = {9,4,6,3,5,6,1,10,12,1,2};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	
	for (int i=0; i < size -1; i++){
		// minimum element in the unsorted array
		int min_idx = i;
		// to go through unsorted portion
		for (int j=i+1; j < size; j++){
			if (arr[j] < arr[min_idx]){
				min_idx = j;
			}
		}
		
		// swap the found minimum element to correct position
		int temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
	}
	
	// print the sorted array
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
}



