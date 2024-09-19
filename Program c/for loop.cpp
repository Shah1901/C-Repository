#include<stdio.h
int main()
{
	int sum=0, i;
	printf("the first ten natural numbers are :\n");
	
	for(i=0; i<=10;i++)
	{ sum+=i;
	printf(" %d\n", i);
	}
	printf(" the sum is %d\n", sum);
	return 0;
}
