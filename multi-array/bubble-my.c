#include <stdio.h>

int main()
{
	int i, j, temp;
	int arr[10] = {1,8,4,8,2,9,2,3,4,6};

	for (i = 0; i < 10; i++){
		for (j = 0; j < 10 - i -1; j++){ //ascending
			if (arr[j] > arr[j+1]){ // swap element if greater than next element			
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;				
			}		
		}
	}
	
	printf("Your sorted array: ");
	// printing the sorted array
	for (i = 0; i < 10; i++){		
		printf("%d ", arr[i]);
	}
	
	return 0;
			 
}

// https://www.youtube.com/watch?v=RfXt_qHDEPw <-- coded in js, but we'll use c lang
// big o(n^2)

