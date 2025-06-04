#include <stdio.h>


int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int x = 4; // value we want to find in the array
	
	int low, high; 
	while (low <= high) {
		int mid = low + (high - low) / 2;
		
		// check if x is the mid
		if (arr[mid] == x){
			printf("The value %d is present in the array and is in index %d.", x, mid);
		}
		
		// if x is greater, ignore the left half
		if (arr[mid] < x){
			low = mid + 1;
		} else {
			high = mid - 1;
		} 
	}
}