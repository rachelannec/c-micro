// and i can't remember ??
// basta parang somthing like this, 'di ko maalala 'yung sa menu part 

#include <stdio.h>
#include <string.h> // strcmp()
#include <ctype.h> // tolower()

#define MAX 10
#define NUM 2 // original, 5

struct doctor{
	char dname[80];
	char specialty[100];
} doc[MAX], *dptr;

struct patient{
	char name[80];
	int age;
	char condition[100];
	struct doctor dptr;
} pat[MAX], *pptr;

void structToFile(struct patient *pptr){
	FILE *fp;
	fp = fopen("patient.txt", "w");
	if (fp == NULL){
		printf("Unable to open file.\n");
		return;
	}
	fprintf(fp, "Record of Patients\n\n");
	
	for(int i=0; i< NUM ; i++){
		fprintf(fp, "Name: %s\n", (pptr+i)->name);
		fprintf(fp, "Age: %d\n", (pptr+i)->age);
		fprintf(fp, "Condition: %s\n", (pptr+i)->condition);
		fprintf(fp,"Doctor: Dr. %s\n", (pptr+i)->dptr.dname);
		fprintf(fp, "\n");
	}
	
	fclose(fp);
}


void filterDisplay(struct patient *pptr){ // only Surgical
	printf("List of Surgical Patients: \n");
	for (int i=0; i < NUM; i++){
		if(strcmp("Surgery", (pptr+i)->dptr.specialty) == 0){
			printf("Name: %s\n", (pptr+i)->name);
			printf("Age: %d\n", (pptr+i)->age);
			printf("Condition: %s\n", (pptr+i)->condition);
			printf("Doctor: Dr. %s\n", (pptr+i)->dptr.dname);
			printf("\n");
		}
	
		
	}
}

int main(){
	struct patient pat[MAX];
	pptr= pat;
	struct doctor doc[MAX];
	dptr= doc;

	printf("Enter %d patients records\n\n", NUM);
	
	for (int i=0; i< NUM ; i++){
		printf("Patient %d\n", i+1);
		printf("Name: ");
		scanf(" %[^\n]", (pptr+i)->name);
		printf("Age: ");
		scanf("%d", &(pptr+i)->age);
		printf("Condition: ");
		scanf(" %[^\n]", (pptr+i)->condition);
		printf("Doctor: Dr. ");
		scanf(" %[^\n]", (pptr+i)->dptr.dname);
		printf("Doctor's Specialty: ");
		scanf(" %[^\n]", (pptr+i)->dptr.specialty);
		printf("\n");
	}
	
	filterDisplay(pptr);
	structToFile(pptr);
}