#include<stdio.h>
int main()
{
	int num, sum=0;
	printf("Enter the positive numbers");
	scanf("%d",&num);
	
	for (int i=1; i<=num; i++)
	{
	sum+=i;	
	}
	printf("sum of first %d numbers is %d\n", num, sum);
	
	return 0;
}
