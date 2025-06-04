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
	} inventory[maxSTOCK];

	int stockNum=0; // to track number of items in inventory, globaly

	void enterNewRecord(struct shoeStore inventory[], int *count){
		printf("\n============== Enter New Record ==============\n");
		int index=*count;

		inventory[index].stockNum=index; 
		
		printf("Stock number %d\n", index);
		printf("Enter a style number (0-50): ");
		scanf("%d", &inventory[index].styleNum);
		if (inventory[index].styleNum < 0 || inventory[index].styleNum >= maxSTYLE+1){
			printf("Invalid style number!\n");
			return;
		}

		printf("Enter the price of the shoe: ");
		scanf("%d", &inventory[index].price);

		printf("Enter number of pairs for each size: \n");
		for (int i=0; i < maxSIZE- minSIZE +1 ; i++){
			printf("Size %d: ", i+ minSIZE);
			scanf("%d", &inventory[index].pairs[i]);
		}

		inventory[index].stockNum = index; // set the stock number
		printf("Record added with stock number %d!\n", index);
		(*count)++;
		stockNum++;

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
		
		if (c==1) { // stock
			if (n >=0 && n< stockNum) {
				return n;
			}
		} 
		else if (c ==2) { // style
			for (int i= 0; i<stockNum ; i++) {
				if (inventory[i].styleNum == n) {
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

		struct shoeStore tShoe= inventory[index];

		printf("\n");
		printf("Shoe Details:\n");
		printf("Stock Number: %d\n", tShoe.stockNum);
		printf("Style Number: %d\n",tShoe.styleNum);
		printf("Price: %d\n", tShoe.price);

		printf("Number of pairs for each size:\n");
		for (int i=0; i< maxSIZE - minSIZE+1 ; i++){
			printf("Size: %d, Number of Pairs: %d\n", minSIZE +i, tShoe.pairs[i]);
		}
	}

	void changePrice(){
		printf("\n=================== Change Price ==================\n");
		int index=findShoe();

		if(index== -1){
			printf("Shoe not found!\n");
			return;
		}

		printf("Current price: %d\n", inventory[index].price);
		printf("Enter new price:");
		scanf("%d", &inventory[index].price);
		printf("Price updated to %d\n", inventory[index].price);


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
		if(size < minSIZE || size > maxSIZE){
			printf("Invalid size!\n");
			return;
		}

		int newPairs;
		printf("Current number of pairs: %d\n", inventory[index].pairs[size-minSIZE]);
		printf("Enter new number of pairs: ");
		scanf("%d", &newPairs);
		inventory[index].pairs[size-minSIZE]=newPairs;

		printf("Number of pairs updated to %d\n", inventory[index].pairs[size-minSIZE]);
	}

	void menu(){
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
					enterNewRecord(inventory, &itemCount);
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