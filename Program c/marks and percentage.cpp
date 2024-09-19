#include<stdio.h>
int main () {
	float subject1, subject2, subject3, subject4, subject5 ;
	float TotalMarks, Average, Percentage;
	
	printf("Enter the marks of first subject : ");
	scanf("%f", &subject1);
	
	printf("Enter the marks of second subject : ");
	scanf("%f", &subject2);
	
	printf("Enter the marks of third subject : ");
	scanf("%f", &subject3);
	
	printf("Enter the marks of fourth subject : ");
	scanf("%f", &subject4);
	
	printf("Enter the marks of fifth subject : ");
	scanf("%f", &subject5);
	
	// Calclate total marks
	TotalMarks = subject1, subject2, subject3, subject4, subject5 ;
	
	// calculate average
	Average= TotalMarks/5;
	
	//Calculate percentage
	Percentage = (TotalMarks/100)*100;
	
	printf("Total Marks: %2f\n", TotalMarks);
	printf("Average marks: %2f\n, avarage");
	printf("Percentage: %2f\n, percentage");
	
	
	
	
	
	
	
	return 0;
}
