// this is actually a failed attempt nyahahha, sk8 bagsak
#include <stdio.h>

int main()
{
	char answer;
	int choice;
	
	do 
	{
		
		
		printf("MENU \n");
		printf("1. Plato \n");
		printf("2. Smiley \n");
		printf("3. Volume \n");
		printf("4. EXIT \n");
		printf("==================== \n");
		printf("Which one would you like to try? (1-4): ");
		scanf("%d", &choice);
		
		if(choice == 1)
		{
			printf("PLATO \n");
			int age = 0;
			printf("Enter you age: ");
			scanf("%d", &age);
			
			age = (age / 2) + 7;
			printf("\nYour ideal partner's age is %d.\n", age);
			
		
		} 
		
		if(choice == 2)
		{
			// smiley
			printf("SMILEY \n");
			int x,y,z,smileyAns;
			printf("Enter 3 integers: ");
			scanf("%d %d %d", &x,&y,&z);
			smileyAns = 2 *(x+y+z);
			printf("Twice the sum of %d %d %d is %d. :) :) :)\n", x,y,z,smileyAns);
			
			
		} 
		
		if(choice == 3)
		{
			printf("VOLUME \n");
			int h,w,l,volumeAns;
			printf("Enter the height, width, and length (respectively): ");
			scanf("%d %d %d", &h, &w,&l);
			volumeAns = h*w*l;
			printf("The volume of the rectangular box is %d.\n", volumeAns);
			
			
			
			
		} 
		
		if (choice == 4) 
		{
			return 0;
	}
		
		
	} while (answer == 'y' || answer == 'Y' || 1);
}