#include <stdio.h>

int main() 
{
    int height, age, c_code, r_code;

    printf("Applicant's height(cm): ");
    scanf("%d", &height);
    printf("Applicant's age: ");
    scanf("%d", &age);
    printf("Citizenship code (1-citizen, 0-not citizen): ");
    scanf("%d", &c_code);
    printf("Recomendee's code (1-recommended, 0-not recommended): ");
    scanf("%d", &c_code);
    
    if (r_code == 1) 
    {
		printf("You are accepted to Jedi Knight Academy!/n");
	}
	else if (height >= 200 && age >= 21 || age <= 25 && c_code == 1)
	{
		printf("You are accepted to Jedi Knight Academy!/n");
	}
	else 
	{
		printf("You are not accepted to Jedi Knight Academy./n");
	}
	 
	return 0;
}


