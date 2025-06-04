//Write a program to score five – card poker hands into one of the following categories: nothing, one pair, two pairs, three 
//of a kind, straight (in order), flush(all the same suit), full house(three of a kind and one pair), four of a kind and a 
//straight flush (both straight and flush). Use an array of structures to store the hand. The structure has one member for
// the value and one for the suit of the card.
//https://www.wikihow.com/Play-Five-Card-Draw

#include <stdio.h>
#include <ctype.h> // toupper() - not case sensitive

#define size 5

struct card {
	int value; // ace to king, 1-13
	char suit; // spade-s,heart-H,diamond-D,clubs-C
} hand[5], *hptr;


// sort cards by value
void sortCards(struct card *hptr){ // change to pointer
	for(int i=0; i<size; i++){
		for (int j= 0; j< size-i-1; j++){
			if ((hptr+j)->value > (hptr+j+1)->value){
				struct card temp = *(hptr+j);
				*(hptr+j)= *(hptr+j+1);
				*(hptr+j+1) = temp;
			}
		}
	}
}



void evalCard(struct card *hptr){ // change to pointer
	sortCards(hptr); // change to pointer

	// check if flush (same suit)
	int isFlush=1;
	for (int i=0; i<size; i++){
		if ((hptr+i)->suit != (hptr)->suit){ // change to pointer
			isFlush=0;
			break;
		}
	}

	// check if straight (sunod-sunod)
	int isStraight = 1;
	for (int i=0; i<size ;  i++){
		if ((hptr+i)->value != (hptr)->value+ i){ // change to pointer
			isStraight=0;
			break;
		}
	}

	// check for pairs
	int pairCount=0, threeCount=0, fourCount=0;
	int valueCount[14] = {0}; // 1-13, 0 index is unused
	for (int i=0; i<size; i++){
		valueCount[(hptr+i)->value]++; // change to pointer
	}
	for (int i=1; i<14; i++){
		if (valueCount[i] == 2){
			pairCount++;
		}
		else if (valueCount[i] == 3){
			threeCount++;
		}
		else if (valueCount[i] == 4){
			fourCount++;
		}
	}

	// hand score 
	if (isFlush && isStraight){
		printf("Straight Flush\n");
	} else if(fourCount){
		printf("Four of a Kind\n");
	} else if (threeCount && pairCount){
		printf("Full House\n");
	} else if(isFlush){
		printf("Flush\n");

	}else if (isStraight){
		printf("Straight\n");
	} else if(threeCount){
		printf("Three of a kind\n");
	} else if (pairCount == 2){
		printf("Two Pairs\n");
	} else if(pairCount == 1){
		printf("One Pair\n");
	} else {
		printf("Nothing\n");
	}
		

}

int main(){
	
	printf("Five Hand Poker\n");
	printf("Instruction: When entering your card, use 1 for Ace, 11 for Jack,\n12 for Queen, and 13 for King. Use S, D, H,and C for suit. (Ex. 1S)\n\n");
	
	char play='Y';
	
	char validSuits[] = {'S', 'D', 'H', 'C'};
	
	hptr = hand;
	
	while(1){
		printf("Enter your cards:\n");
		
		
		for (int i=0; i<size ; i++){
			int validCard =0;
			
			while (!validCard){
				printf("Card %d: ", i+1);
				scanf("%d %c", &(hptr+i)->value, &(hptr+i)->suit);
				
				(hptr+i)->suit = toupper((hptr+i)->suit); // convert lowercase to uppercase
				
				int validValue = 0;
				int validSuit =0;
				
				// check if input 1-13 only
				if((hptr+i)->value >= 1 && (hptr+i)->value <= 13){
					validValue=1;
				}
				
				// check if input S,H,D,C
				for (int j=0; j<4 ; j++){
					if((hptr+i)->suit == validSuits[j]){
						validSuit=1;
						break;
					}
				}
				
				if(!validValue && !validSuit){
					printf("Invalid card! Value must be 1-13 and suit must be S, D, H, or C.\n");
					continue;
				} else if(!validValue){
					printf("Invalid card value. Enter the card value 1-13.\n");
					continue;
				} else if(!validSuit){
					printf("Invalid card suit. Use S (Spades), D (Diamonds), H (Hearts), or C (Clubs).\n");
					continue;
				} else {
					validCard =1;
				}
				
			}
			
		}
		// printing the hand
		printf("Cards in hand: \n");
		for (int i=0; i< size; i++){
			if((hptr+i)->value == 1){
				printf("A%c ", (hptr+i)->suit);
			} else if ((hptr+i)->value == 11){
				printf("J%c ", (hptr+i)->suit);
			} else if ((hptr+i)->value == 12){
				printf("Q%c ", (hptr+i)->suit);
			} else if ((hptr+i)->value == 13){
				printf("K%c ", (hptr+i)->suit);
			} else {
				printf("%d%c ", (hptr+i)->value, (hptr+i)->suit);
			}
		}
		printf("\n\n");
		
		evalCard(hptr); // use pointer hptr to pass value
		
		
		printf("Continue playing? (Y/N)   ");
		scanf(" %c", &play);
		play = toupper(play);
		
		if (play == 'N'){
			printf("Thanks for playing!\n");
			return;
		}
		
		printf("\n\n");
	}
	return 0;
}
