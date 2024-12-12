#include <stdio.h>
#include <math.h> // sqrt()

int main()
{
	#define arrSIZE 20
	#define SENTINEL -1
	int X[arrSIZE], Y[arrSIZE], Z[arrSIZE];
	int N = 0; // acutal number of element
	int sumZ = 0;
	float sqrootZ = 0.00; //%.2f
	
	// few notes for the user that i noticed while testing the program
	printf("---> If you will input exactly 20 items, you won't need to add %d at the end. \n", SENTINEL);
	printf("---> If you will input more items in array Y than in array X, those excess items in array Y will be ignored. \n");
	printf("---> Happy coding! :> \n\n");
	
	// ask for numbers to be stored in X that end with SENTINEL
	printf("Enter the elements for list X (end with %d): ", SENTINEL);
	for(int i = 0; i < arrSIZE; i++)
	{
		scanf("%d", &X[i]);
		if(X[i] == SENTINEL) break; // so that if SENTINEL is entered, it breaks the loop
		N++;
	}
	
	// ask for numbers to be stored in X that end with SENTINEL
	printf("Enter the elements for list Y (end with %d): ", SENTINEL);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &Y[i]);
		if(Y[i] == SENTINEL) break; // so that if SENTINEL is entered, it breaks the loop which ask for elements for array
	}
	
	// calculate the product of corresponding X and Y to array Z
	for (int i = 0; i < N;i++)
	{
		Z[i] = X[i] * Y[i];
		
	}
	
	// calculate the sum of elements in array Z
	for (int i= 0; i < N; i++)
	{
		sumZ += Z[i];
	}
	
	sqrootZ = sqrt(sumZ);
	
	// displaying the output
	printf("The square root of the sum of the items in array Z is %.2f.", sqrootZ);
	

	
	return 0;
	// sample data - 20 elements
	// 2 3 5 3 6 4 8 9 6 4 2 5 6 4 7 4 2 1 0 9
	// 9 8 3 3 1 7 9 6 4 7 5 5 3 6 9 0 7 5 3 2
	// square root: 21.33
	
	
}

// https://codehs.com/glossary/term/21 - The SENTINEL is a constant that has the specific purpose of being the value that breaks out of a loop; usually 0 or -1.


/*

this kung wala lang yan sentinel nayan
#include <stdio.h>
#include <math.h>
//program that take 2 num lists with same length ended with SENTINEL VALUE
//and store the list in array X and Y, which has 20 elements
//N - actual number of data values - 20 since the size of X & Y is 20
//Z - product (*) of elements in array X and Y, size 20
//print the square root of the sum of array Z
//square root of a number is the value of power 1/2 of that number
//or use math.h ;-; hehe

#define N 20 // number of elements

int main()
{
	int X[N] = {2,3,5,3,6,4,8,9,6,4,2,5,6,4,7,4,2,1,0,9};
	int Y[N] = {9,8,3,3,1,7,9,6,4,7,5,5,3,6,9,0,7,5,3,2};
	int Z[N];
	int sumZ = 0;
	float sqRootZ = 0.00;
	
	
	for (int i = 0; i < N; i++)
	{
		Z[i] = X[i] * Y[i];
	}
	
	for (int i = 0; i < N;i++)
	{
		sumZ += Z[i];
	}
	
	sqRootZ = sqrt(sumZ); // square root function inside math.h
	
//	printf("%d", sumZ); <- 455
	printf("%.2f", sqRootZ);

	
	
	return 0;
}

//2,3,5,3,6,4,8,9,6,4,2,5,6,4,7,4,2,1,0,9
//9,8,3,3,1,7,9,6,4,7,5,5,3,6,9,0,7,5,3,2
*/