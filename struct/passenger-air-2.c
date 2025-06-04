#include <stdio.h>
#include <ctype.h> // toupper()

struct passSeat{
    int seatNum;
    char seatLett;
} seat[20], *sptr;

void assignSeat(struct passSeat *sptr){ 
	int sNum;
	char sLett;
	int seatAvailable = 20;
	
	while(seatAvailable > 0) {
		printf("\nCurrent seats available: \n");
		for (int i= 0; i<5 ; i++){
			printf("%d", i+1);
			for (int j=0; j<4; j++){
				printf("\t%c", (sptr+i*4+j)->seatLett); // access using arrow operator
			}
			printf("\n");
		}
		
		
		printf("Assign seat row (1-5) or enter 0 to exit: ");
		scanf(" %d", &sNum);
		
		if (sNum == 0){
			printf("\n\nProgram ended!");
			return; // stop the program
		}
		
		// check if input 1-5
		if (sNum < 1 || sNum > 5 ) {
            printf("\nInvalid seat row! Choose 1 to 5 only.\n");
            continue;
        }
		
		printf("Assign seat column (A-D): ");
		scanf(" %c", &sLett);

		sLett = toupper(sLett); // convert to uppercase if entered lowercases
		
		// check if input A-D
		if(sLett < 'A' || sLett > 'D'){
        	printf("\nInvalid seat column! Choose A to D only.\n");
        	continue;
		} 	
		
		int taken=0;
		for (int i=0; i < 20; i++){
            if (sNum == (sptr+i)->seatNum && sLett == (sptr+i)->seatLett){ // change to access using pointer
                taken = 1;
				(sptr+i)->seatLett = 'X'; // change to pointer
				seatAvailable--;
				printf("Seat %d%c assigned successfully.\n", sNum, sLett);
			
                break;  
            }
        }
		
			
		if (!taken){
			printf("\nSeat already taken. Choose another!\n");
		}
	}
	
	
	
	printf("\n\nAll seats are filled. ");
}

int main(){
	struct passSeat seat[20] = {
		{1, 'A'}, {1, 'B'}, {1, 'C'}, {1, 'D'},
		{2,'A'}, {2,'B'}, {2,'C'}, {2,'D'},
		{3,'A'}, {3,'B'}, {3,'C'}, {3,'D'},
		{4,'A'}, {4,'B'}, {4,'C'}, {4,'D'},
		{5, 'A'}, {5, 'B'}, {5, 'C'}, {5, 'D'},
	};
	
	// pointer
	sptr = seat; 
	
	// printing the seats
	printf("Passenger seats\n");
	for (int i= 0; i<5 ; i++){
		printf("%d", i+1);
		for (int j=0; j<4; j++){
			printf("\t%c", (sptr+i*4+j)->seatLett); // access using arrow operator
		}
		printf("\n");
	}
	

	
	printf("\n");
	assignSeat(sptr);
	
	return 0;
}