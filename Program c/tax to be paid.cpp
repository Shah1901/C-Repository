#include<stdio.h>
int main()
{
	float tax=0, income;
printf("enter your income:\n");
scanf("%f", &income);

if(income>=2500000 && income<=5000000)
tax = tax + 0.05 * (income-2500000);

if(income>=5000000 && income<=10000000)
tax = tax + 0.20 * (income-2500000);

if(income>=10000000)
tax = tax + 0.30 * (income-2500000);

printf("your net income tax to be paid is:%f\n", tax);
	
	return 0;
}
