//Make a program that will input the N product codes, product names, and the number of stocks per product and 
//write the product per record as initial inventory to a file “Inventory.txt”.
//
//Update the quantity of each product based on the inputted update code: A – Add, S- Subtract.
//For the process of updating the inventory of products, the user will input product code, update code and 
//quantity. If the user input ‘A’ for the update code, the quantity inputted will be “Added” to the initial 
//quantity of products. If the user input ‘S’ for the update code, the quantity inputted will be “Subtracted” 
//from the initial quantity of products. The updating process will continue until the user does not want to 
//update anymore.
//
//Update the records from the file “Inventory.txt” and display the updated file.


#include <stdio.h>
#include <stdlib.h> // malloc
#include <ctype.h> // toupper
#include <string.h> // strcpy

#define MAX_PROD 100

struct prod{
	char productCode[80];
	char productName[100];
	int quantity;
} products[MAX_PROD], *ptr;

void checkFile(FILE *fp){
	if (fp == NULL){
		printf("Error opening file.\n");
		return;
	}
}

void structToFile(struct prod *ptr, int num){
	FILE *fp;
	
	ptr = products;
	
	fp = fopen("Inventory.txt", "a");
	checkFile(fp);
	
	for (int i =0; i< num ; i++){
		fprintf(fp, "%s\t\t%s\t\t%d\n", (ptr+i)->productCode, (ptr+i)->productName, (ptr+i)->quantity);
	}
		
	fclose(fp);
}

void displayFile(FILE *fp){
	fp = fopen("Inventory.txt", "r");
	checkFile(fp);
	char *textFile = (char *)malloc(1000 *sizeof(char));
	
	while (textFile == NULL){
		printf("Memory allocation failed.\n");
		fclose(fp);
		return;
	}
	
	while(fgets(textFile, 1000, fp) != NULL){
		printf("%s", textFile);
	}
	printf("\n");
	free(textFile);
	fclose(fp);
}

void updateInventory(struct prod *ptr, int num, FILE *fp){
	char ifUpdate;
	printf("Do you want to update the inventory? (Y/N): ");
	scanf(" %c", &ifUpdate);
	
	ifUpdate = toupper(ifUpdate);
	
	char tempPC[80];
	int found = 0;
	char newCode[80];
	int newQuantity;
	
	if(ifUpdate == 'Y'){
		printf("\n");
		while (!found){
			printf("Product code: ");
			scanf(" %s", &tempPC);
			
			for (int i=0; i< num; i++){
				if (strcmp(tempPC, (ptr+i)->productCode) == 0){
					printf("Update Code: ");
					scanf(" %s", newCode);
					strcpy((ptr+i)->productCode, newCode);
					
					printf("Quantity: ");
					scanf("%d", &newQuantity);
					(ptr+i)->quantity = newQuantity;
					
					found = 1;
					break;
				} 
				if(!found){
					printf("Record not found. Try again\n");
				}
				
			}
			
		}
		structToFile(ptr, num);
		printf("\n");
	} 
	
	
	displayFile(fp);
}

int main(){
	FILE *fp;
	
	fp = fopen("Inventory.txt", "w");
	checkFile(fp);
	char header[100] = "Product Code\tProduct Name\tQuantity\n";
	
	fprintf(fp, "%s\n", header);
	
	fclose(fp);
	
	ptr = products; // struct pointer 
	
	int numberOfInput;
	printf("Please enter how many products: ");
	scanf("%d", &numberOfInput);
	printf("\n");
	
	for(int i=0; i< numberOfInput; i++){
		printf("Product Code: ");
		scanf(" %s", (ptr+i)->productCode);
		
		printf("Product Name: ");
		scanf(" %s", (ptr+i)->productName);
		
		printf("Quantity: ");
		scanf(" %d", &(ptr+i)->quantity);
		
		printf("\n");
	}

	
	structToFile(ptr, numberOfInput); // write structure to file
	displayFile(fp);
	
	updateInventory(ptr, numberOfInput, fp);
	return 0;
}

// may bug at hindi tapos.. bahala na kayo d'yan waaahahah