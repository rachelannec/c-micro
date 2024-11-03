#include <stdio.h>

int main()
{
	// this get second, --> hour:minute:second 
	// 20241031
	
	
	int seconds = 0;
	int hour, minute, second;
	
	printf("Enter time in seconds: ");
	scanf("%d", &seconds);
	
	while(seconds >= 3600)
	{
		seconds = seconds - 3600;
		hour = hour + 1;
	}
	
	while(seconds >= 60)
	{
		seconds = seconds - 60;
		minute = minute + 1;
	}
	
	while(seconds >= 1)
	{
		seconds = seconds - 1;
		second = second + 1;
	}
	
	
	printf("Time is %d:%d:%d. \n",hour, minute, second);
	return 0;
}



