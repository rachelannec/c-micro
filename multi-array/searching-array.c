#include <stdio.h>

int linear_search(int arr[], int size, int x){
	for (int i = 0;i < size;i++){
		if (arr[i] == x){
			return i;
		}
	}
	
	return -1; // not found
}

int binary_search(int arr[], int size, int x){
	int low=0, high=size-1; 
	while (low <= high) {
		int mid = low + (high - low) / 2;
		
		// check if x is the mid
		if (arr[mid] == x){
			return mid;
		}
		
		// if x is greater, ignore the left half
		if (arr[mid] < x){
			low = mid + 1;
		} else {
			high = mid - 1;
		} 
	}
	
	return -1; // not found	
}

int main(){
	int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 12;
    
    int result1 = binary_search(arr, size, target);
    int result2 = linear_search(arr, size, target);
    
    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("Note: If it return -1, it means that value is not in array.\n\n");
}