#include <stdio.h>
#include <math.h>

void greet(){
	printf("Hello. Thank you for using this library/function, where you can use add(), subtract(), multiply(), divide(), square(), and squareRoot().\n\n"); 
}

int add(int x, int y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

float divide(int x, int y) {
	return (float)x / y;
}

int square(int x) {
	return x*x;
}

int sqrt(int x){
	return sqrt(x);
}

// Functions List
// add()
// subtract()
// multiply()
// divide()
// square()
// squareRoot()
