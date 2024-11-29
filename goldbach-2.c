#include <stdio.h>

int main() 
{
    int n, i, j, prime1, prime2;

    #define START 700
    #define END 1100

    // fine 2 prime numbers that sum up to n
    for (n = START; n <= END; n+= 2) {
        for (i = 2; i<=n/2; i++) {
            prime1 = 1;

            for(j = 2; j<=i/2; j++) {
                if (i%j == 0) {
                    prime1 = 0;
                    break;
                }
            }

            prime2 = 1;
            for (j = 2; j <= (n-i)/2; j++) {
                if ((n-i)%j == 0) {
                    prime2 = 0;
                    break;
                }
            }

            if (prime1 && prime2) {
                printf("%d = %d + %d\n", n, i, n-i);
                break;
            }
        }  
    }

    return 0;
}