#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void isPalindrome(){
	char input[80];
	char reverse[80];
	printf("Enter a string: ");
	scanf("%s", &input);
	
	// printf("%s\n", input);
	strcpy(reverse, input);
	strrev(reverse);
	// printf("%s\n", reverse);

	if (strcmp(input, reverse) == 0){
		printf("It is a palindrome.\n");
	} else {
		printf("It is not a palindrome.\n");
	}
	
}


int main(){
	isPalindrome();
}

// void reverseString(char* str) { 
// 	int n = strlen(str); 
// 	for (int i = 0; i < n / 2; i++) { 
// 		char temp = str[i]; 
// 		str[i] = str[n - i - 1]; 
// 		str[n - i - 1] = temp;
// 	}
// }