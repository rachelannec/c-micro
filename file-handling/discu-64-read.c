#include <stdio.h>

int main(){
	FILE *fp;

	fp= fopen("D:\\fh-loc\\sample.txt", "r"); // read mode - usb location
	// check if alrady exists
	if (fp == NULL) {
		printf("Error opening file!\n");
		return 1;
	}
	
	char code[80];
	// fscanf(fp, "%s\n", code);


	printf("Laman ng File:\n");
	while (fgets(code, sizeof(code), fp) != NULL) {
		printf("%s", code);
	}

	fclose(fp);
	
	return 0;
}
