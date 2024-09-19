#include<stdio.h>
int main()
{
	int i=0;
	
	printf("the numbers from 0 to 10:\n");
	
	while( i<=10)
	{
		printf("%d\n", i);
		i++;
	}
	i=10;
	
	printf("the numbers from 10 to 0:\n");
	
	while( i>=0)
	{
		printf("%d\n", i);
		i--;
	}
	return 0;
}
