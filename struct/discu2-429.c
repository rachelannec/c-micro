#include <stdio.h>

#define MAX 3

struct Student{
	char name[80];
	int age;
	char gender;
};

int main(){
	struct Student st[MAX];
	
	printf("Detail for %d students: \n\n", MAX);
	for (int i = 0; i< MAX; i++){
		printf("Student %d\n", i+1);
		printf("Name: ");
		scanf(" %[^\n]", st[i].name); // string with spaces
		printf("Age: ");
		scanf(" %d", &st[i].age);
		printf("Gender: ");
		scanf(" %c", &st[i].gender);
		
		printf("\n\n");
	}
	
	// printing
	printf("List of students: \n");
	for (int i=0; i< MAX; i++){
		printf("Name: %s, Age: %d, Gender: %c\n", st[i].name, st[i].age, st[i].gender);
	}
	
	return 0;
}