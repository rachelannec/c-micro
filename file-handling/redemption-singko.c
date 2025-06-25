#include <stdio.h>

void checkFile(FILE *fp){
	while(fp == NULL) {
		printf("Error opening file.\n");
		return;
	}
}

int main(){
	FILE *fp;
	
	fp = fopen("BSCS.txt", "w");
	
	int evenNum[5] = {2,4,6,8,10};
	
	for (int i =0; i< 5; i++){
		fprintf(fp, "%d\n", evenNum[i]);
	}
	
	fclose(fp);
	
	// reading / displaying
	int arr[5];
	fp = fopen("BSCS.txt", "r");
	
	while(fgets(arr, 5, fp) != NULL){
		printf("%s", arr);
	}
	
	fclose(fclose);
	
	// 'di ko maintindihan 'yung last instruction, lol.. basta yan
	return 0;
	
}