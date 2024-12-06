// this one is a failed attempt
// because this

// The dates for the 12 zodiac signs are:
// Aries: March 21–April 19
// Taurus: April 20–May 20
// Gemini: May 21–June 21
// Cancer: June 22–July 22
// Leo: July 23–August 22
// Virgo: August 23–September 22
// Libra: September 23–October 23
// Scorpio: October 24–November 21
// Sagittarius: November 22–December 21
// Capricorn: December 22–January 19
// Aquarius: January 20–February 18
// Pisces: February 19–March 20

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
	char birthmonth[80];
	int birthday;
	printf("What is your birth month and birthday? (enter in lower case): ");
	scanf("%79s", &birthmonth);
	scanf("%d", &birthday);
	
	
	// aries
	if (strcmp(birthmonth, "march") == 0 && birthday >= 21 && birthday <=31 || strcmp(birthmonth, "april") == 0 && birthday <= 19)	
			printf("Symbol : Ram \n"); 	

	// taurus
	else if (strcmp(birthmonth, "april") == 0 && birthday >= 20 && birthday <=31  || strcmp(birthmonth, "may") == 0 && birthday <= 20)
			printf("Symbol : Bull \n");
		
	
	// gemini
	else if (strcmp(birthmonth, "may") == 0 &&  birthday >= 21 && birthday <= 31 || strcmp(birthmonth, "june") == 0 && birthday <= 21)
			printf("Symbol : Twins \n");
	
	
	// cancer
	else if (strcmp(birthmonth, "june") == 0 && birthday >=  22 && birthday <= 31|| strcmp(birthmonth, "july") == 0 && birthday <= 22)
			printf("Symbol : Crab \n");
	
	
	// leo
	else if (strcmp(birthmonth, "july") == 0  &&  birthday >=  23 && birthday <= 31|| strcmp(birthmonth, "august") == 0 && birthday <=  22)
		
		{
			printf("Symbol : Lion \n");
		}
	
		
	// virgo
	else if (strcmp(birthmonth, "august") == 0 && birthday >=  23 && birthday <= 31 || strcmp(birthmonth, "september") ==  0 && birthday <=  22)
			printf("Symbol : Virgin \n");
	
	
	// libra
	else if (strcmp(birthmonth, "september") == 0 && birthday >=  23 && birthday <= 31 || strcmp(birthmonth, "october") == 0 && birthday <=  23)
			printf("Symbol : Balance \n");
	
	
	// scorpions
	else if (strcmp(birthmonth, "october") == 0 && birthday >= 24 && birthday <= 31|| strcmp(birthmonth, "november") == 0 && birthday <= 21)
			printf("Symbol : Scorpions \n");
		
	
	// saggi
	else if (strcmp(birthmonth, "november") == 0 && birthday >= 22 && birthday <= 31|| strcmp(birthmonth, "december") == 0 && birthday <= 21)
			printf("Symbol : Archer \n");

	
	// capri
	else if (strcmp(birthmonth, "december") == 0 && birthday >= 22 && birthday <= 31|| strcmp(birthmonth, "january") == 0 && birthday <= 19)
			printf("Symbol : Goat \n");

	
	// aquarius
	else if (strcmp(birthmonth, "january") == 0 && birthday >= 20 && birthday <= 31|| strcmp(birthmonth, "february") == 0 && birthday <= 18)
			printf("Symbol : Water Bearer \n");
	

	// pisces
	if (strcmp(birthmonth, "february") == 0 && birthday >= 19 && birthday <= 31|| strcmp(birthmonth, "march") == 0 && birthday <= 20)
			printf("Symbol : Fish \n");

	
	return 0;




}