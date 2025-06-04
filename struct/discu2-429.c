#include <stdio.h>

struct Student{
	char name[80];
	int age;
	char gender;
};

int main(){
	struct Student st[3];
	
	printf("Detail for %d students: \n\n", MAX);
	for (int i = 0; i< 3; i++){
		printf("Student %d\n", i+1);
		printf("Name: ");
		scanf(" %[^\n]", Student[i].name); // string with spaces
		printf("Age: ");
		scanf(" %f", &Student[i].age);
		printf("Gender: ");
		scanf(" %c", &Student[i].gender);
		
		printf("\n\n");
	}
	
	// printing
	printf("List of students: \n");
	for (int i=0; i< 3; i++){
		printf("Name: %s, Grade: %.2f\n", Student[i].name, Student[i].gender);
	}
	
	return 0;
}