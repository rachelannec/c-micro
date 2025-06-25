#include <stdio.h>

int main(){
	FILE *fp;
	
	fp = fopen("this.txt", "w");
	if(fp == NULL){
		printf("Error opening this file.\n");
		return 1;
	}
	
	char str[80] = "hellow";
	fprintf(fp,"%s\n", str);
	
	fclose(fp);	
	
	return 0;
}