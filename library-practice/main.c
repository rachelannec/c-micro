#include <stdio.h>
#include "library.h"

int main(){
	greet();

	int a = 5, b = 3, c = 49;

	int q = add(a, b);
	int w = subtract(a, b);
    int e = multiply(a, b);
    float r = divide(a, b);
    int t = square(a);
    double y = squareRoot(c);

    printf("Addition: %d\n", q);
    printf("Subtraction: %d\n", w);
    printf("Multiplication: %d\n", e);
    printf("Division: %f\n", r);
    printf("Square: %d\n", t);
    printf("Square Root: %.1lf\n", y);

	
	// printf("%d", add(2, 5));
	// printf("%d", subtract(5, 2));
	// printf("%d", multiply(2, 5));
	// printf("%f", divide(5, 2));
	// printf("%d", square(5));
	// printf("%d", squareRoot(49));

	return 0;
}

// Output:
// Hello. Thank you for using this library/function, where you can use add(), subtract(), multiply(), divide(), square(), and squareRoot().

// Addition: 8
// Subtraction: 2
// Multiplication: 15
// Division: 1.666667
// Square: 25
// Square Root: 7