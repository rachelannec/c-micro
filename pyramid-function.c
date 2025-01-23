#include <stdio.h>

int pyramid(int h){
	for (int i=0;i < h;i++){
		for (int j=0;j < h-i-1;j++){
			printf(" ");
		}
		for (int j=0;j < 2*i+1;j++){
			printf("*");
		}
		printf("\n");
	}	
}

int main(){
	int height;
	printf("Enter height for pyramid: ");
	scanf("%d", &height);
	pyramid(height);
}