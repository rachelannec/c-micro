#include <stdio.h>

#define MAX 5

struct student{
	char name[80];
	float grade;
};

int main(){
	struct student Students[MAX];
	printf("Detail for %d students: \n\n", MAX);
	for (int i = 0; i< MAX; i++){
		printf("Student %d\n", i+1);
		printf("Name: ");
		scanf(" %[^\n]", Students[i].name); // string with spaces
		printf("Grade: ");
		scanf(" %f", &Students[i].grade);
		
		printf("\n\n");
	}
	
	// printing
	printf("List of students: \n");
	for (int i=0; i< MAX; i++){
		printf("Name: %s, Grade: %.2f\n", Students[i].name, Students[i].grade);
	}
	
}