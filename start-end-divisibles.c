// input: starting number, last number, divisor
// output: numbers that are divisible by divisor, then the printf part 

#include <stdio.h>

int main()
{
    int n1, n2, m, count = 0;
    
    printf("Enter starting number (n1): ");
    scanf("%d", &n1);
    printf("Enter last number (n2): ");
    scanf("%d", &n2);
    printf("Enter divisor (m): ");
    scanf("%d", &m);
    
    for (int i = n1; i <= n2; i++)
    {
        if (i % m == 0)
        {
            count++;
            if (count > 1) {
                printf(", "); 
            }
            printf("%d", i);
        }
    }
    
    if (count > 0) {
        printf(". ");
    }
    printf("There are %d numbers that are divisible by %d", count, m);
}
