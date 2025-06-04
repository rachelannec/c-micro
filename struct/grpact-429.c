#include <stdio.h>

struct Student{
	int Idno;
	char fname[80];
	char lname[80];
};

int main(){
	struct Student st[5];
	
	printf("Detail for %d students: \n\n", 5);
	for (int i = 0; i< 5; i++){
		printf("Student %d\n", i+1);
		
		printf("ID Number: ");
		scanf("%d", &st[i].Idno);
		
		printf("First Name: ");
		scanf("%s", &st[i].fname); 
		
		printf("Last Name: ");
		scanf("%s", &st[i].lname); 
	
		
		printf("\n\n");
	}
	

	//ascending order the IDnumber
	for (int i=0; i< 5-1; i++) {
        for (int j=0; j< 5-i - 1; j++) {
            if (st[j].Idno > st[j+ 1].Idno) {
                struct Student temp = st[j];
                st[j] = st[j+1];
                st[j+1] = temp;
            }
        }
    }

	// printing the students
	printf("List of students (ascending by ID number): \n");
	for (int i=0; i< 5; i++){
		printf("ID Number: %d, First Name: %s, Last Name: %s", st[i].Idno, st[i].fname, st[i].lname);
		printf("\n");
	}
	
//	printf("List of students (ascending by ID number): \n\n");
//	printf("ID Number | First Name | Last Name\n");
//	for (int i=0; i< 5; i++){
//		
//		printf("%d\t | %s\t | %s\t", st[i].Idno, st[i].fname, st[i].lname);
//		printf("\n");
//	}
	return 0;
}