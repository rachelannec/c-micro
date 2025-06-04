	#include <stdio.h>

	#define minSIZE 3
	#define maxSIZE 14
	#define maxSTOCK 100 // max inventory items
	#define maxSTYLE 50 // max styles

	struct shoeStore {
		int stockNum;
		int styleNum;
		int pairs[maxSIZE- minSIZE +1];
		int price;
	} inventory[maxSTOCK], *shptr;

	int stockN=0; // to track number of items in inventory, globaly

	void enterNewRecord(struct shoeStore *shptr, int *count){
		printf("\n============== Enter New Record ==============\n");
		int index=*count;

		(shptr+index)->stockNum=index; // chgange to poiner
		
		printf("Stock number %d\n", index);
		
		printf("Enter a style number (0-50): ");
		scanf("%d", &(shptr+index)->styleNum); // change to pointer
		
		if ((shptr+index)->styleNum < 0 || (shptr+index)->styleNum >= maxSTYLE+1){ // change to pointer
			printf("Invalid style number!\n");
			return;
		}

		printf("Enter the price of the shoe: ");
		scanf("%d", &(shptr+index)->price); // change to pointer

		printf("Enter number of pairs for each size: \n");
		for (int i=0; i < maxSIZE- minSIZE +1 ; i++){
			printf("Size %d: ", i+ minSIZE);
			scanf("%d", &(shptr+index)->pairs[i]); // change to pointer notation
		}

		(shptr+index)->stockNum = index; // set the stock number, change to pointers
		printf("Record added with stock number %d!\n", index);
		(*count)++;
		stockN++;

	}


	int findShoe(){
		int c, n;
		printf("Search for a shoe by:\n");
		printf("1. Stock Number\n");
		printf("2. Style Number\n");
		
		printf("Enter your choice (1-2): ");
		scanf("%d", &c);
		
		printf("Enter the number to search for: ");
		scanf("%d",&n);
		
		if (c==1) { // searhc by stock number
			if (n >=0 && n< stockN) {
				return n;
			}
		} 
		else if (c ==2) { // search by style number, 
			for (int i= 0; i<stockN ; i++) {
				if ((shptr+i)->styleNum == n) { //change to pointer
					return i;
				}
			}
		}
		
		return -1; // not found
	}


	void displayRecord(){
		printf("\n================= Display Record =================\n");

		int index = findShoe();
		if(index == -1){
			printf("Shoe not found!\n");
			return;
		}

		struct shoeStore tShoe= *(shptr +index); // change to pointer

		printf("\n");
		printf("Shoe Details:\n");
		printf("Stock Number: %d\n", tShoe.stockNum);
		printf("Style Number: %d\n",tShoe.styleNum);
		printf("Price: %d\n", tShoe.price);

		printf("Number of pairs for each size:\n");
		printf("|  Size\t|   Number of Pairs  |\n"); // to display like table
		for (int i=0; i< maxSIZE - minSIZE+1 ; i++){
			printf("|  %d\t|   %d\t\t     |\n", minSIZE +i, tShoe.pairs[i]);
		}
	}

	void changePrice(){
		printf("\n=================== Change Price ==================\n");
		int index=findShoe();

		if(index== -1){
			printf("Shoe not found!\n");
			return;
		}

		printf("Current price: %d\n", (shptr +index)->price); // cahnge to pointer
		printf("Enter new price:");
		scanf("%d", &(shptr +index)->price); // change to pointer
		printf("Price updated to %d\n", (shptr +index)->price); // change to pointer


	}

	void changeOnHand(){
		printf("\n============== Change Number on Hand ==============\n");
		int index=findShoe();

		if(index== -1){
			printf("Shoe not found!\n");
			return;
		}

		int size;
		printf("Enter the size to change (3-14): ");
		scanf("%d", &size);
		if(size < minSIZE || size> maxSIZE){
			printf("Invalid size!\n");
			return;
		}

		int newPairs;
		printf("Current number of pairs: %d\n", (shptr +index)->pairs[size-minSIZE]); // change to pointer
		printf("Enter new number of pairs: ");
		scanf("%d", &newPairs);
		(shptr +index)->pairs[size-minSIZE]=newPairs; // change to pointer

		printf("Number of pairs updated to %d\n", (shptr +index)->pairs[size-minSIZE]); // change to poineter
	}

	void menu(){
		shptr = inventory;
		int choice;
		int itemCount = 0; // to track number of items 
		
		while (1) { // run infinitely - always true
			printf("\n========== Inventory of Shoe Store ==========\n");
			printf("Current item(s) inventory: %d\n", itemCount);
			printf("1. Enter a new record\n");
			printf("2. Display a record\n");
			printf("3. Change price\n");
			printf("4. Change number on hand\n");
			printf("5. Exit\n"); // so the user can exit the program
			
			printf("Enter your choice: ");
			scanf("%d",&choice);
			
			switch(choice){
				case 1:
					enterNewRecord(shptr, &itemCount);
					break;
				case 2:
					displayRecord();
					break;
				case 3:
					changePrice();
					break;
				case 4:
					changeOnHand();
					break;
				case 5:
					printf("Program ended!");
					return; // exit the program
				default:
					printf("Invalid choice! Try again.\n");
			}
		}
	}

	int main(){
		menu();
		
		return 0;
	}