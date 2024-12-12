#include <stdio.h>
 
//program that accepts student name, and their set of answers in 1d array
//it should also grade the test, 1 - 1 point, 2 - 2 points,..., 5 - 5 points, 0 - no answer
//print: name, your total score is __ and your average score is __
int main()
{
	const testItems = 5;
	char studentName[80];
	int testAnswer[testItems];
	int studentScore = 0;
	float aveScore;
	
	// asking for name
	printf("Enter student name: ");
	scanf("%79s", &studentName);
	
	// getting the test answers
	for (int i = 0;i < 5; i++)
	{
		printf("Enter Answer # %d? ", i+1);
		scanf("%d", &testAnswer[i]);
	}
	
	// giving points for answers
	for (int i = 0; i < testItems; i++)
	{	
		if(testAnswer[i] == 1)
			studentScore += 1;
		else if(testAnswer[i] == 2)
			studentScore += 2;
		else if(testAnswer[i] == 3)
			studentScore += 3;
		else if(testAnswer[i] == 4)
			studentScore += 4;
		else if(testAnswer[i] == 5)
			studentScore += 5;
		else 
			studentScore += 0;
	}
	
	// calculating the average
	aveScore = (float)studentScore / testItems;
	
	// output
	printf("%s, your total score is %d and your average score is %.1f.", studentName, studentScore, aveScore);
	
//	printf("%d\n", studentScore);
//	printf("%.1f", aveScore);
//	printf("%s", studentName);

	
	return 0;
}