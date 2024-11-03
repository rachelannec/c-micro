#include <stdio.h>
#include <string.h> // para sa string compare (strcmp) ung atake

// good luck sa ating lahat sa quiz ;-;, naiiyak na ako lord!!!

int main(int argc, const char * argv[])
{
	char your_emotion[50]; 
	
	do 
	{
		printf("How are you feeling today (happy/sad)? \n");
		scanf("%49s", &your_emotion);
		
		if (strcmp(your_emotion, "happy") == 0 || strcmp(your_emotion, "sad") == 0)
		{
			break;
		}
		else 
		{
			printf("Please, type only either 'happy' or 'sad'.\n");
		}
	} while (1);
	
//	add do while to keep asking for input but happy or sad, yon, nasa taas nagawa
	
	printf("You are feeling %s today!\n", your_emotion);
	return 0;
}

// 20241022 - wala pang review para sa quiz sa comp prog bukas hahahah, prayers nalang!!!!!!!!!! 
