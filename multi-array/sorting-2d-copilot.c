#include <stdio.h>

#define ROWS 3
#define COLS 4

// Function to convert 2D array to 1D array
void convert2Dto1D(int arr2D[ROWS][COLS], int arr1D[], int size) {
    int k = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr1D[k++] = arr2D[i][j];
        }
    }
}

// Function to convert 1D array to 2D array
void convert1Dto2D(int arr1D[], int arr2D[ROWS][COLS], int size) {
    int k = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr2D[i][j] = arr1D[k++];
        }
    }
}

// Function to sort a 1D array (simple bubble sort)
void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr2D[ROWS][COLS] = {
        {12, 11, 5, 7},
        {2, 3, 1, 10},
        {15, 6, 4, 9}
    };
    int size = ROWS * COLS;
    int arr1D[size];
    
    // Convert 2D array to 1D array
    convert2Dto1D(arr2D, arr1D, size);

    // Sort the 1D array
    bubble_sort(arr1D, size);
    
    // Convert sorted 1D array back to 2D array
    convert1Dto2D(arr1D, arr2D, size);

    // Print the sorted 2D array
    printf("Sorted 2D array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr2D[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// copied from copilot