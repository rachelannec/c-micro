#include <stdio.h>


int main(){ 
	FILE *fp;
	
	fp= fopen("D:\\fh-loc\\sample.txt", "a"); // append mode - usb location
	// check if alrady exists
	if (fp == NULL) {
		printf("Error opening file!\n");
		return 1;
	}

	char name[80]="helloworld again lol";
	fprintf(fp, "%s\n", name);

	fclose(fp);

	return 0;


}
