#include <stdio.h>

int main()
{
	int i,j;
	int arr[10] = {1,8,4,8,2,9,2,3,4,6};
	int lengthArr = sizeof(arr) / sizeof(arr[0]);
	
	for (i = 1; i < lengthArr; i++){
		int current = arr[i];
		j = i - 1;
		
		while (j > -1 && current < arr[j]){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = current;
	}
	
	// printing the sorted array
	for (i = 0; i < lengthArr; i++)
	{
		printf("%d", arr[i]);
		printf(", ");
	}
	
	return 0;
}

// https://www.youtube.com/watch?v=RfXt_qHDEPw <-- coded in js, but we'll use c lang
// big o(n^2)