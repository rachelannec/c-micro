
//breakout room 2

#include <stdio.h>

int main()
{
	int x = 3;
	for (int i = 1;  i <= x; i++)
	{
		for (int j = 3;j >= i; j--)            
		{
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}

// so after ilang tries - 20240312
// output: 321
// 			31
// 			 3
