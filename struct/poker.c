//Write a program to score five – card poker hands into one of the following categories: nothing, one pair, two pairs, three 
//of a kind, straight (in order), flush(all the same suit), full house(three of a kind and one pair), four of a kind and a 
//straight flush (both straight and flush). Use an array of structures to store the hand. The structure has one member for
// the value and one for the suit of the card.
//https://www.wikihow.com/Play-Five-Card-Draw

#include <stdio.h>

#define size 5

struct card {
	int value; // ace to king, 1-13
	char suit; // spade-s,heart-H,diamond-D,clubs-C
};


// sort cards by value
void sortCards(struct card hand[]){
	for(int i=0l; i<size; i++){
		for (int j= 0; j< size-i-1; j++){
			if (hand[j].value > hand[j+1].value){
				struct card temp = hand[j];
				hand[j] = hand[j+1];
				hand[j+1] = temp;
			}
		}
	}
}



void evalCard(struct card hand[]){
	sortCards(hand);

	// check if flush (same suit)
	int isFlush=1;
	for (int i=0; i<size; i++){
		if (hand[i].suit != hand[0].suit){
			isFlush=0;
			break;
		}
	}

	// check if straight (sunod-sunod)
	int isStraight = 1;
	for (int i=0; i<size ;  i++){
		if (hand[i].value != hand[0].value+i){
			isStraight=0;
			break;
		}
	}

	// check for pairs
	int pairCount=0, threeCount=0, fourCount=0;
	int valueCount[14] = {0}; // 1-13, 0 index is unused
	for (int i=0; i<size; i++){
		valueCount[hand[i].value]++;
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
	struct card hand[5] = {
		{9, 'S'}, {13, 'S'}, {13,'C'},{13, 'H'}, {9,'H'}
	};



	// printing the hand
	printf("Cards in hand: \n");
	for (int i=0; i< size; i++){
		if(hand[i].value == 1){
			printf("A%c ", hand[i].suit);
		} else if (hand[i].value == 11){
			printf("J%c ", hand[i].suit);
		} else if (hand[i].value == 12){
			printf("Q%c ", hand[i].suit);
		} else if (hand[i].value == 13){
			printf("K%c ", hand[i].suit);
		} else {
			printf("%d%c ", hand[i].value, hand[i].suit);
		}
	}
	printf("\n\n");
	
	evalCard(hand);
	return 0;
}


// the problem does not ask for royal flush, but if ever needed 
// if (isFlush && isStraight){
// 	if(hand[0].value ==1 && hand[1].value == 10 && hand[2].value == 11 && hand[3].value == 12 && hand[4].value == 13){
// 		printf("Royal Flush");
// 	} else {
// 		printf("Straight Flush");
// 	}
// }
