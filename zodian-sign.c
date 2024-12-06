// this one is a failed attempt
// because this

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
	char birthmonth[80];
	int birthday;
	printf("What is your birth month? (enter in lower case): ");
	scanf("%79s", &birthmonth);
	printf("What is your birthday? : ");
	scanf("%d", &birthday);
	
	
	// aries
	if (strcmp(birthmonth, "march") == 0 || strcmp(birthmonth, "april") == 0)
		{
			if (birthday <=  21 || birthday >= 19)
		{
			printf("Symbol : Ram \n");
		}
	}	
	// taurus
	if (strcmp(birthmonth, "april") == 0 || strcmp(birthmonth, "may") == 0)
		{
			if (birthday <= 20 || birthday >= 20)
		{
			printf("Symbol : Bull \n");
		}
	}
	
	// gemini
	if (strcmp(birthmonth, "may") == 0 &&  birthday == 20 || strcmp(birthmonth, "june") == 0 && birthday >= 21)
		{
			printf("Symbol : Twins \n");
		}
	
	
	// cancer
	if (strcmp(birthmonth, "june") == 0 && birthday <=  22 || strcmp(birthmonth, "july") == 0 && birthday >= 22)
		{
			printf("Symbol : Crab \n");
		}
	
	
	// leo
	if (strcmp(birthmonth, "july") == 0  &&  birthday <=  23|| strcmp(birthmonth, "august") == 0 && birthday <=  22)
		
		{
			printf("Symbol : Lion \n");
		}
	
		
	// virgo
	if (strcmp(birthmonth, "august") == 0 && birthday <=  23 || strcmp(birthmonth, "september") ==  0 && birthday <=  22)

		{
			printf("Symbol : Virgin \n");
		}
	
	
	// libra
	if (strcmp(birthmonth, "september") == 0 && birthday <=  23|| strcmp(birthmonth, "october") == 0 && birthday <=  23)
		{
			printf("Symbol : Balance \n");
		}
	
	
	// scorpions
	if (strcmp(birthmonth, "october") == 0 || strcmp(birthmonth, "november") == 0)
		{
			if (birthday <=  24 || birthday >= 21)
		{
			printf("Symbol : Scorpions \n");
		}
	}
	
	// saggi
	if (strcmp(birthmonth, "november") == 0 || strcmp(birthmonth, "december") == 0)
		{
			if (birthday <=  22 || birthday >= 21)
		{
			printf("Symbol : Archer \n");
		}
	}
	
	// capri
	if (strcmp(birthmonth, "december") == 0 || strcmp(birthmonth, "january") == 0)
		{
			if (birthday <=  22 || birthday >= 19)
		{
			printf("Symbol : Goat \n");
		}
	}
	
	// aquarius
	if (strcmp(birthmonth, "january") == 0 || strcmp(birthmonth, "february") == 0)
		{
			if (birthday <=  20 || birthday >= 18)
		{
			printf("Symbol : Water Bearer \n");
		}
	}
	
	// pisces
	if (strcmp(birthmonth, "february") == 0 || strcmp(birthmonth, "march") == 0)
		{
			if (birthday <=  19 || birthday >= 20)
		{
			printf("Symbol : Fish \n");
		}
	}
	
	return 0;




}