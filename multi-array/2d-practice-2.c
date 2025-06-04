#include <stdio.h>

int main() {
	int x[3][4] = {2,4,6,8,10,12,1,3,5,7,9,11};
	for (int a=0; a<3; a++){
		for (int b=0; b<4; b++){
			printf("%d\t", x[a][b]);
		}
		printf("\n");
	}
		
}