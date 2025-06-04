#include <stdio.h>

#define ROWS 3
#define COLS 4

int selection_sort(int arr[], int size){
	for(int i=0; i < size - 1; i++){
		int min_idx = 0;
		for(int j=i+1; j<i; j++){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
			}
		}
		
		int temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
	}
}

// Linear Search in a 2D array
int linear_search_2d(int arr[ROWS][COLS], int target) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == target) {
                return i * COLS + j;  // Return the 1D index of the element
            }
        }
    }
    return -1;  // Not found
}

// Binary Search in a 2D array (assuming it is sorted)
int binary_search_2d(int arr[ROWS][COLS], int target) {
    int low = 0;
    int high = ROWS * COLS - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int mid_value = arr[mid / COLS][mid % COLS];

        if (mid_value == target) {
            return mid;  // Return the 1D index of the element
        }
        if (mid_value < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;  // Not found
}

int main() {
    int arr[ROWS][COLS] = {
        {10, 11, 16, 20},
        {1, 3, 5, 7},
        {23, 10, 34, 12}
    };
    int target = 16;
    
    int result[] = selection_sort(arr, 12);
    
    
    

//    int result1 = linear_search_2d(arr, target);
//    int result2 = binary_search_2d(arr, target);
//
//    printf("Note: If it returns -1, it means the value is not in the array.\n\n");
//    
//    printf("Linear Search Result (1D index): %d\n", result1);
//    printf("Binary Search Result (1D index): %d\n", result2);

    return 0;
}
