#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 

int main() {
	// ================ strcpy(); ====================
	char s1[80];
	char s2[80] = "Hello";
	printf("%s\n", strcpy(s1, s2));
	// output: hello
	

	// ================ strcat(); ====================
	// we can also use literal string when concatinating
	char s3[80] = "hello";
	char s4[80] = "world";
	strcat(s3,s4);
	printf("%s\n", s3);
	// output: helloworld
	
	// ================= strlen(); ==================
	char s5[80] = "hello world";
	int x = strlen(s5);
	printf("%d\n", x);
	// output: 11
	
	
	// ================ strcmp(); ====================
	char s6[80] = "hi";
	char s7[80] = "hello";
	
	if (strcmp(s6,s7))
		printf("PUP\n");
	else 
		printf("BSCS\n");
		
	// ================ strchr(); ====================
	char s8[80] = "I love BSCS";
	printf("%s\n", strchr(s8, 'l'));
	// output: love BSCS 
	
	// ================ strrev(); ====================
	char s9[80] = "nice";
	printf("%s\n", strrev(s9));
	// output: ecin
	
	
	// ================ math ====================
	int a = 3;
	int b = pow(x,3);
	printf("%d\n", b);
}