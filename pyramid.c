#include <stdio.h>

int main()
{
    int height;
    printf("Enter the height: ");
    scanf("%d", &height);
    
    for(int i = 0; i <= height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// usually for this one, they use * instead