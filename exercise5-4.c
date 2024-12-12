#include <stdio.h>

//program theat would store 11 numbers in 1d array
//store sum of two succeeding pairs in anohter array

int main()
{
	const sizeArr = 11;
	int arr[sizeArr];
	int succeedSum[sizeArr + 1];
	
	// input the 11 numbers 
	printf("Enter up to eleven numbers: \t");
    for (int i = 0; i < sizeArr; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
	// add the 2 succeeding numbers in the array
    for (int i = 0; i < sizeArr; i++)
    {	
    	succeedSum[i] = arr[i] + arr[i+1];
	}
	
	// print the 2 succeeding array - 10 elements
	printf("SUM of TWO succeeding pairs: ");
	for (int i = 0; i < 10; i++) {
        printf("%d ", succeedSum[i]);
    }
	
}


//Write a program that would store 11 numbers in a one dimensional array. Store the sum of the two succeeding pairs in another array. Hence, only 10 integers will be stored in the second array
//Sample Run:
//Enter eleven numbers: 1 2 3 4 5 6 7 8 9 10 11
//SUM of TWO succeeding pairs:3 5 7 9 11 13 15 17 19 21
