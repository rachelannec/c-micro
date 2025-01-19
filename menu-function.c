#include <stdio.h>
#include <stdbool.h>

//plato, smiley, volume
void plato()
{
	printf("============================================================= \n");
	printf("PLATO \n\n");
	int	age = 0; 
	char sex;
	printf("Are male or female? (m/f): ");
	scanf(" %c", &sex);
	printf("Enter you age: ");
	scanf("%d", &age);
	
	if (age < 18) 
	{
		printf("Too young. Try again after %d year/s!\n", 18 - age);
		printf("============================================================= \n");	
	}
	else if (age <= 18 || age <= 21 && sex == 'm' || sex == 'M') // because upon testing, if you are around this age, you'll get a minor.. so.. yeahh ;-;
	{
		printf("\nYour ideal partner's age is 18.\n");
		printf("============================================================= \n");
	}
	else if (age > 21 && sex == 'm' || sex == 'M')
	{
		age = (age / 2) + 7;
		printf("\nYour ideal partner's age is %d.\n", age);
		printf("============================================================= \n");
	}
	else 
	{
		age = (age - 7) * 2;
		printf("\nYour ideal partner's age is %d.\n", age);
	}
	
//	if girl, partner = 2*(age-7)
}

void smiley() // late to realize that maybe I could use void instead lol
{
	printf("============================================================= \n");
	printf("SMILEY \n\n");
	int x,y,z,smileyAns;
	printf("Enter 3 integers: ");
	scanf("%d %d %d", &x,&y,&z);
	smileyAns = 2 *(x+y+z);
	printf("Twice the sum of %d %d %d is %d. :) :) :)\n", x,y,z,smileyAns);	
	printf("============================================================= \n");
}

void volume()
{
	printf("============================================================= \n");
	printf("VOLUME \n\n");
	int h,w,l,volumeAns;
	printf("Enter the height, width, and length (respectively): ");
	scanf("%d %d %d", &h, &w,&l);
	volumeAns = h*w*l;
	printf("The volume of the rectangular box is %d.\n", volumeAns);
	printf("============================================================= \n");
}

int main()
{
	int choice1 = 0; // for programs / functions
	char choice2; // for trying again the program
	do
	{
		printf("============================================================= \n");
		printf("MENU \n");
		printf("============================================================= \n");
		printf("1. Plato \n");
		printf("2. Smiley \n");
		printf("3. Volume \n");
		printf("4. EXIT \n");
		printf("============================================================= \n");
		printf("Which one would you like to try? (1-4): ");
		scanf("%d", &choice1);
		
		if (choice1 == 1)
		{
			plato(); // argument to 0 as initialization to age
		}
		else if (choice1 == 2)
		{
			smiley();
		}
		else if (choice1 == 3)
		{
			volume();
		}
		else
		{
			printf("Okay. Goodbye! \n");
			return 0; // exit the program
		}
		
		printf("\nDo you want to try again? (y/n): ");
		scanf(" %c", &choice2);
		
		if (choice2 != 'y' && choice2 != 'Y') {
			printf("Okay. Goodbye! \n");
		}
	} while (choice2 == 'y' || choice2 == 'Y');

		
	return 0;
}