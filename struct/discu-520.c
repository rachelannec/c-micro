#include <stdio.h>

struct student {
	char name[80];
	int age;
	int id;
} st[3], *p;

int main(){
	for(int i=0; i<3; i++){
		printf("Enter name: ");
		scanf("%s", &st[i].name);
		
		printf("Enter age: ");
		scanf("%d", &st[i].age);
		
		printf("Enter ID: ");
		scanf("%d", &st[i].id);
	
	}
	
	p = st;
	
	for (int i=0; i<3 ; i++){
		printf("Name: %s\t Age: %d\t ID: %d\n	", (*(p+i)).name, (*(p+i)).age, (*(p+i)).id);
	}
	
	
}