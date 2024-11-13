#include <stdio.h>

int main() 
{
	// input: seconds
	// output: "time is 00:00:00 - hour: minute: second
	// 20241113
	
	int hour, minute, second, seconds;
	
	printf("Enter time in seconds: ");
	scanf("%d", &seconds);
	
	hour = seconds / 3600;
	minute = (seconds % 3600) / 60;
	second = seconds % 60;
	
	printf("Time is %d:%d:%d /n", hour,minute,second);
	
	return 0;
}