#include <stdio.h>

// Recursive function to print a pyramid pattern
void print_pyramid(int n, int current_row) {
    if (current_row > n) {
        return;
    }

    // Print leading spaces
    for (int i = 0; i < n - current_row; i++) {
        printf(" ");
    }

    // Print stars
    for (int j = 0; j < 2 * current_row - 1; j++) {
        printf("*");
    }

    // Move to the next line
    printf("\n");

    // Call the function recursively for the next row
    print_pyramid(n, current_row + 1);
}

int main() {
    int height;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    // Call the recursive function to print the pyramid
    print_pyramid(height, 1);
    return 0;
}
