#include <stdio.h>

int main(int argc, const char * argv[])
{
	char your_emotion[50]; 
	printf("How are you feeling today? (happy or sad) ");
	scanf("%49s", &your_emotion);
	
	printf("You are feeling %s today!\n", your_emotion);
	return 0;
}
