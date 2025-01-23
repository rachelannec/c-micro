#include <stdio.h>

int main() {
    int arr[10]; 
    int i;

    printf("Enter up to 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }


    printf("You entered:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 

    return 0;
}
